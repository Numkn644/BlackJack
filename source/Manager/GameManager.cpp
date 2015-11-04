#include "GameManager.h"


GameManager::GameManager() : m_scene(INIT)
{
}


GameManager::~GameManager()
{
}

void GameManager::initialize()
{
	m_deck = new Deck;
	m_deck->construct();

	m_player = new Player();
	m_dealer = new Dealer();

	m_playerHand = new Hand();
	m_dealerHand = new Hand();

	m_judge = new Judge();

	/*手札をセット*/
	m_player->setHand(m_playerHand);
	m_dealer->setHand(m_dealerHand);
}

void GameManager::execute()
{
	/*更新*/
	m_player->update();
	m_dealer->update();
	m_deck->update();

	/*描画*/
	m_player->draw();
	m_dealer->draw();

	/*シーン遷移*/
	switch (m_scene){
	case INIT:
		m_player->initialize();
		m_dealer->initialize();

		m_scene = BET;
		break;

	case BET:
		DrawFormatString(0, 460, 0xffffff, "BETしてください");
		m_player->bet();
		if (KeyboardInput::Instance()->get(KEY_INPUT_Q) == 1){
			m_player->setBet();
			m_scene = DEAL; 
		}
		drawState("TURN--->BET");
		break;

	case DEAL:
		/*プレイヤーに手札を配る*/
		for (int i = 0; i < 2; i++){
			if (m_player->hit(m_deck->handCard(), true)){ m_deck->popCard(); }
		}
		/*ディーラーに手札を配る*/
		if (m_dealer->hit(m_deck->handCard(), true)){ m_deck->popCard(); }
		if (m_dealer->hit(m_deck->handCard(), false)){ m_deck->popCard(); }

		m_scene = PLAYER;
		break;

	case PLAYER:
		if (KeyboardInput::Instance()->get(KEY_INPUT_H) == 1){
			if (m_player->hit(m_deck->handCard(), true)){ m_deck->popCard(); }
		}
		if (m_player->vast() || m_player->stand()){ m_scene = DEALER; }

		drawState("TURN--->PLAYER");
		break;

	case DEALER:
		if (!m_dealer->moreLessSeventeen()){
			if (m_dealer->hit(m_deck->handCard(), false)){ m_deck->popCard(); }
		}
		else if (m_dealer->stand() || m_dealer->vast() || m_dealer->moreLessSeventeen()){ m_scene = JUDGE; }
		
		drawState("TURN--->DEALER");
		break;

	case JUDGE:
		m_player->setState(m_judge->execute(m_playerHand->getScore(), m_dealerHand->getScore()));
		m_player->liquidate();
		m_scene = RESULT;

		drawState("TURN--->JUDGE");

	case RESULT:
		m_dealer->turn();
		if (KeyboardInput::Instance()->get(KEY_INPUT_N) == 1){
			m_scene = INIT; 
			m_player->finalize();
		}
		
		drawState("TURN--->RESULT");
		break;
	}
}

void GameManager::finalize()
{
	delete m_deck;
	delete m_player;
	delete m_dealer;
	delete m_playerHand;
	delete m_dealerHand;
	delete m_judge;
}

void GameManager::drawState(char *str)
{
	DrawFormatString(0, 0, 0xffffff, str);
}
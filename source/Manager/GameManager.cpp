#include "GameManager.h"


GameManager::GameManager()
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

	m_playerHand->initialize();
	m_dealerHand->initialize();

	/*ŽèŽD‚ðƒZƒbƒg*/
	m_player->setHand(m_playerHand);
	m_dealer->setHand(m_dealerHand);
}

void GameManager::execute()
{
	if (KeyboardInput::Instance()->get(KEY_INPUT_H) == 1){
		if (m_player->hit(m_deck->handCard(), true)){ m_deck->popCard(); }
	}

	if (KeyboardInput::Instance()->get(KEY_INPUT_D) == 1){
		if (m_dealer->hit(m_deck->handCard(), false)){ m_deck->popCard(); }
	}

	m_player->draw();
	m_dealer->draw();
}

void GameManager::finalize()
{
	delete m_deck;
	delete m_player;
	delete m_dealer;
	delete m_playerHand;
	delete m_dealerHand;
}
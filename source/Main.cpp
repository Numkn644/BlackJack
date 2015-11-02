#include "DxLib.h"
#include "Utility\KeyboardInput.h"

#include "Person\Player.h"
#include "Person\Dealer.h"
#include "Deck\Deck.h"
#include "Hand\Hand.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	int handle = LoadGraph("image/backGround.png");
	Deck m_deck;
	Player m_player;
	Dealer m_dealer;
	Hand *m_playerHand;
	Hand *m_dealerHand;

	m_deck.construct();

	m_playerHand = new Hand();
	m_player.setHand(m_playerHand);

	m_dealerHand = new Hand();
	m_dealer.setHand(m_dealerHand);

	m_playerHand->initialize();
	m_dealerHand->initialize();


	while (!ProcessMessage() && !ScreenFlip() && !ClearDrawScreen())
	{
		/*キーボードアップデート*/
		KeyboardInput::Instance()->update();
		if (KeyboardInput::Instance()->get(KEY_INPUT_ESCAPE) == 1){ break; }


		DrawGraph(0, 0, handle, FALSE);

		/*メイン処理*/
		if (KeyboardInput::Instance()->get(KEY_INPUT_H) == 1){
			if (m_player.hit(m_deck.handCard(), true)){ m_deck.popCard(); }
		}

		if (KeyboardInput::Instance()->get(KEY_INPUT_D) == 1){
			if (m_dealer.hit(m_deck.handCard(), true)){ m_deck.popCard(); }
		}

		m_player.draw();
		m_dealer.draw();

	}

	delete m_playerHand;
	delete m_dealerHand;
	DxLib_End();

	return 0;
}
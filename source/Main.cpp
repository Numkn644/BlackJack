#include "DxLib.h"
#include "Utility\KeyboardInput.h"

#include "Person\Player.h"
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
	Hand *m_hand;

	m_deck.construct();
	m_hand = new Hand();
	m_player.setHand(m_hand);

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

		m_player.draw();

	}

	delete m_hand;
	DxLib_End();

	return 0;
}
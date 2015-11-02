#include "DxLib.h"
#include "Utility\KeyboardInput.h"
#include "Manager\GameManager.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	int handle = LoadGraph("image/backGround.png");

	GameManager *gameMgr;
	gameMgr = new GameManager();

	/*初期化処理*/
	gameMgr->initialize();

	while (!ProcessMessage() && !ScreenFlip() && !ClearDrawScreen())
	{
		/*キーボードアップデート*/
		KeyboardInput::Instance()->update();
		if (KeyboardInput::Instance()->get(KEY_INPUT_ESCAPE) == 1){ break; }


		DrawGraph(0, 0, handle, FALSE);

		/*メイン処理*/
		gameMgr->execute();

	}
	/*終了処理*/
	gameMgr->finalize();
	delete gameMgr;

	DxLib_End();

	return 0;
}
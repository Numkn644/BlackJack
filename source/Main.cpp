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

	/*����������*/
	gameMgr->initialize();

	while (!ProcessMessage() && !ScreenFlip() && !ClearDrawScreen())
	{
		/*�L�[�{�[�h�A�b�v�f�[�g*/
		KeyboardInput::Instance()->update();
		if (KeyboardInput::Instance()->get(KEY_INPUT_ESCAPE) == 1){ break; }


		DrawGraph(0, 0, handle, FALSE);

		/*���C������*/
		gameMgr->execute();

	}
	/*�I������*/
	gameMgr->finalize();
	delete gameMgr;

	DxLib_End();

	return 0;
}
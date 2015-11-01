#include "DxLib.h"
#include "Utility\KeyboardInput.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (!ProcessMessage() && !ScreenFlip() && !ClearDrawScreen())
	{
		/*キーボードアップデート*/
		KeyboardInput::Instance()->update();
		if (KeyboardInput::Instance()->get(KEY_INPUT_ESCAPE) == 1){ break; }

		/*メイン処理*/


	}

	DxLib_End();

	return 0;
}
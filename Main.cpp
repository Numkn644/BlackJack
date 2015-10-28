#include "DxLib.h"
#include "Utility\Keyboard.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (!ProcessMessage() && !ScreenFlip() && !ClearDrawScreen())
	{
		Keyboard::Instance()->update();
		if (Keyboard::Instance()->get(KEY_INPUT_ESCAPE) == 1){ break; }

	}

	DxLib_End();

	return 0;
}
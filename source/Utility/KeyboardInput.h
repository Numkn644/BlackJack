#pragma once
#include "DxLib.h"
#include "source/Singleton/Singleton.h"

class KeyboardInput : public Singleton<KeyboardInput>
{
	KeyboardInput(){};
	friend Singleton < KeyboardInput >;
private:
	int keyboard_m[256];
	char keyboardBuffer_m[256];
public:
	int update();
	int get(int keyCode);
};



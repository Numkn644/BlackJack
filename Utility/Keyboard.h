#pragma once
#include "DxLib.h"
#include "../Singleton/Singletonh.h"


class Keyboard : public Singleton<Keyboard>
{
private:
	int keyboard_m[256];
	char keyboardBuffer_m[256];
private:
	Keyboard();
	friend Singleton < Keyboard > ;
public:
	~Keyboard();
	int update();
	int get(int keyCode);
};


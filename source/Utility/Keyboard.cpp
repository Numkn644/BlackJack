#include "Keyboard.h"


Keyboard::Keyboard()
{
}


Keyboard::~Keyboard()
{
}

int Keyboard::update()
{
	GetHitKeyStateAll(keyboardBuffer_m);
	for (int keycode = 0; keycode < 256; ++keycode){
		keyboard_m[keycode] = keyboardBuffer_m[keycode] == 1 ? ++keyboard_m[keycode] : 0;
	}

	return 0;
}

int Keyboard::get(int keycode)
{
	return (0 <= keycode && keycode < 256) ? keyboard_m[keycode] : 0;
}

#include "Lose.h"


Lose::Lose()
{
}


Lose::~Lose()
{
}

void Lose::message()
{
	DrawFormatString(200, 420, 0xffffff, "あなたの負けです");
}

int Lose::liquidate(int bet)
{
	return 0;
}

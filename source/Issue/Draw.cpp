#include "Draw.h"


Draw::Draw()
{
}


Draw::~Draw()
{
}

void Draw::message()
{
	DrawFormatString(200, 420, 0xffffff, "あなたの引き分けです");

}

int Draw::liquidate(int bet)
{
	return (bet);
}

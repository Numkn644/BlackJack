#include "Win.h"


Win::Win()
{
}


Win::~Win()
{
}

void Win::message()
{
	DrawFormatString(200, 420, 0xffffff, "あなたの勝ちです");
}

int Win::liquidate(int bet)
{
	return (bet * 2);
}
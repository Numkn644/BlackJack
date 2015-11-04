#include "Lose.h"


Lose::Lose()
{
}


Lose::~Lose()
{
}

void Lose::message()
{
	DrawFormatString(200, 420, 0xffffff, "‚ ‚È‚½‚Ì•‰‚¯‚Å‚·");
}

void Lose::animation()
{
	m_animation->execute();
	m_animation->draw();
}

int Lose::liquidate(int bet)
{
	return 0;
}

void Lose::setAnimation(Animation *animation)
{
	m_animation = animation;
	m_animation->initialize("image/lose.png");
}
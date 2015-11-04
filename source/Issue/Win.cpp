#include "Win.h"


Win::Win()
{
}


Win::~Win()
{
}

void Win::message()
{
	DrawFormatString(200, 420, 0xffffff, "‚ ‚È‚½‚ÌŸ‚¿‚Å‚·");
}
void Win::animation()
{
	m_animation->execute();
	m_animation->draw();
}
int Win::liquidate(int bet)
{
	return (bet * 2);
}

void Win::setAnimation(Animation *animation)
{
	m_animation = animation;
	m_animation->initialize("image/win2.png");
}
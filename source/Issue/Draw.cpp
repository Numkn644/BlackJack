#include "Draw.h"


Draw::Draw()
{
}


Draw::~Draw()
{
}

void Draw::message()
{
	DrawFormatString(200, 420, 0xffffff, "ˆø‚«•ª‚¯‚Å‚·");

}

void Draw::animation()
{
	m_animation->execute();
	m_animation->draw();
}

int Draw::liquidate(int bet)
{
	return (bet);
}

void Draw::setAnimation(Animation *animation)
{
	m_animation = animation;
	m_animation->initialize("image/Draw2.png");
}
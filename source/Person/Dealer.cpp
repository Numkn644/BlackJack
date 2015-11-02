#include "Dealer.h"


Dealer::Dealer()
{
}


Dealer::~Dealer()
{
}

void Dealer::update()
{
	m_hand->update();
}

bool Dealer::hit(Card* card, bool turn)
{
	if(m_hand->addHand(card, 200, 100, turn)){return true; }
	return false;
}

void Dealer::draw()
{
	m_hand->draw();
	m_hand->drawScore(0);
}
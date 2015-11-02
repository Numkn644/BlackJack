#include "Dealer.h"


Dealer::Dealer()
{
}


Dealer::~Dealer()
{
}

bool Dealer::hit(Card* card, bool turn)
{
	if(m_hand->addHand(card, 200, 100, turn)){return true; }
	return false;
}

void Dealer::draw()
{
	m_hand->draw();
}
#include "Dealer.h"


Dealer::Dealer()
{
}


Dealer::~Dealer()
{
}

void Dealer::initialize()
{
	m_hand->initialize();
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

bool Dealer::moreLessSeventeen()
{
	return m_hand->getScore() >= 17;
}

void Dealer::turn()
{
	m_hand->turnToFace();
}
void Dealer::draw()
{
	m_hand->draw();
	m_hand->drawScore(0);
}
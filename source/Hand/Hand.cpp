#include "Hand.h"

bool compCalc(const Card *a, const Card *b)
{
	return *a > *b;
}

Hand::Hand()
{
}


Hand::~Hand()
{
}

void Hand::initialize()
{
	m_counter = 0;
	m_hand.clear();
	m_calcHand.clear();
}
/*ŽèŽD‚ÉƒJ[ƒh‚ð‰Á‚¦‚é*/
bool Hand::addHand(Card* card, int x, int y, bool turn)
{
	m_hand.push_back(card);
	m_calcHand.push_back(card);
	std::sort(m_calcHand.begin(), m_calcHand.end(), compCalc);
	m_counter++;
	card->setPos(x + m_counter * 32, y);
	if (turn){ card->turnOver(); }
	return true;
}

void Hand::draw()
{
	auto drawCard = [&](Card* card){
		if (card->getFace()){ card->drawFace(); }
		else{ card->drawBack(Handle::backHandle); }
	};

	std::for_each(m_hand.begin(), m_hand.end(), drawCard);
}

#include "Player.h"


Player::Player() : m_coins(5000)
{
	
}


Player::~Player()
{

}

bool Player::hit(Card* card, bool turn)
{
	if (m_hand->addHand(card, 200, 300, turn)){ return true; }
	return false;
}

void Player::draw()
{
	m_hand->draw();
}
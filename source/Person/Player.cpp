#include "Player.h"


Player::Player() : m_coins(5000),m_bets(0), m_state(NULL)
{
	
}


Player::~Player()
{

}

void Player::bet()
{
	if (KeyboardInput::Instance()->get(KEY_INPUT_1) == 1){ m_bets += 10; }
	if (KeyboardInput::Instance()->get(KEY_INPUT_2) == 1){ m_bets += 100; }
}

void Player::initialize()
{
	m_hand->initialize();
	m_state = NULL;
	m_bets = 0;
}

void Player::update()
{
	m_hand->update();
}

bool Player::hit(Card* card, bool turn)
{
	if (m_hand->addHand(card, 200, 300, turn)){ return true; }
	return false;
}

void Player::draw()
{
	m_hand->draw();
	m_hand->drawScore(460);
	if (m_state){m_state->message();}
	DrawFormatString(200, 360, 0xffffff, "BET : %d", m_bets);
}
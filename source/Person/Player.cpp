#include "Player.h"


Player::Player() : m_coins(5000),m_bets(0), m_state(NULL)
{
	
}


Player::~Player()
{
	DeleteGraph(m_buttonHandle);
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
	m_stateAnimation = NULL;
	m_bets = 0;
	m_buttonHandle = LoadGraph("image/testButton.png");
}

void Player::update()
{
	m_hand->update();
}

void Player::finalize()
{
	delete m_stateAnimation;
}

bool Player::hit(Card* card, bool turn)
{
	if (m_hand->addHand(card, 200, 300, turn)){ return true; }
	return false;
}

void Player::liquidate()
{
	m_coins += m_state->liquidate(m_bets);
}

void Player::draw()
{
	m_hand->draw();
	m_hand->drawScore(460);
	if (m_state){m_state->message();}
	//DrawFormatString(200, 380, 0xffffff, "BET : %d", m_bets);
	DrawGraph(200, 360, m_buttonHandle, TRUE);
	DrawFormatString(200, 400, 0xffffff, "Coins : %d", m_coins);
	if (m_state){ m_state->animation(); }

}
void Player::setState(Issue* issue)
{
	m_state = issue;
	m_stateAnimation = new Animation();
	m_state->setAnimation(m_stateAnimation);
}
#pragma once
#include "Person.h"
#include "../Hand/Hand.h"

class Player : public Person
{
private:
	int m_coins;
	Hand *m_hand;	/*��D*/
public:
	Player();
	~Player();
public:
	//void bet();		/*�x�b�g*/
	void update();		/*�f�[�^�̍X�V*/
	bool hit(Card* card, bool turn);	/*�q�b�g*/
	void draw();	/*�v���C���[�̕`��*/

	/*�֘A*/
	void setHand(Hand *hand) {m_hand = hand;}	/*Hand�Ƃ̊֘A*/
};


#pragma once
#include "Person.h"
#include "../Hand/Hand.h"
#include "../Issue/Issue.h"

class Player : public Person
{
private:
	int m_coins;
	Hand *m_hand;	/*��D*/
	Issue *m_state;	/*���s*/
public:
	Player();
	~Player();
public:
	//void bet();		/*�x�b�g*/
	void update();		/*�f�[�^�̍X�V*/
	bool hit(Card* card, bool turn);	/*�q�b�g*/
	void draw();	/*�v���C���[�̕`��*/

	/*�Z�b�^*/
	void setState(Issue* issue){ m_state = issue; }	/*����������ݒ�*/

	/*�֘A*/
	void setHand(Hand *hand) {m_hand = hand;}	/*Hand�Ƃ̊֘A*/
};


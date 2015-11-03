#pragma once
#include "Person.h"
#include "../Hand/Hand.h"
#include "../Issue/Issue.h"


class Player : public Person
{
private:
	int m_coins;	/*�����R�C��*/
	int m_bets;		/*�q��*/
	Issue *m_state;	/*���s*/
public:
	Player();
	~Player();
public:
	void bet();		/*�x�b�g*/
	void initialize();	/*������*/
	void update();		/*�f�[�^�̍X�V*/
	bool hit(Card* card, bool turn);	/*�q�b�g*/
	void draw();	/*�v���C���[�̕`��*/

	/*�Z�b�^*/
	void setState(Issue* issue){ m_state = issue; }	/*����������ݒ�*/

};


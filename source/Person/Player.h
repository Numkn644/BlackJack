#pragma once
#include "Person.h"
#include "../Hand/Hand.h"
#include "../Issue/Issue.h"
#include "../Animation/Animation.h"


class Player : public Person
{
private:
	int m_buttonHandle;	/**/

	int m_coins;	/*�����R�C��*/
	int m_bets;		/*�q��*/
	Issue *m_state;	/*���s*/
	Animation *m_stateAnimation;	/*�A�j���[�V����*/

public:
	Player();
	~Player();
public:
	void bet();		/*�x�b�g*/
	void initialize();	/*������*/
	void update();		/*�f�[�^�̍X�V*/
	void finalize();	/*�I������*/
	bool hit(Card* card, bool turn);	/*�q�b�g*/
	void liquidate();	/*���������ɉ����Đ��Z����*/
	void draw();	/*�v���C���[�̕`��*/

	/*�Z�b�^*/
	void setState(Issue* issue);	/*����������ݒ�*/
	void setBet(){ m_coins -= m_bets; }				/*����������Bet�z������*/

};


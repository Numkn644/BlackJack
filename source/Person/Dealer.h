#pragma once
#include "Person.h"
#include "../Hand/Hand.h"

class Dealer : public Person
{
public:
	Dealer();
	~Dealer();
public:
	void initialize();	/*������*/
	void update();	/*�X�V*/
	bool hit(Card* card, bool turn);	/*�q�b�g*/
	bool moreLessSeventeen();		/*17�ȏォ�𔻒�*/
	void turn();		/*��D��\�ɂ���*/
	void draw();	/*�f�B�[���[�̕`��*/
};


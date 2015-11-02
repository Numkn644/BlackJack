#pragma once
#include "Person.h"
#include "../Hand/Hand.h"

class Dealer : Person
{
private:
	Hand *m_hand;
public:
	Dealer();
	~Dealer();
public:
	bool hit(Card* card, bool turn);	/*�q�b�g*/
	void draw();	/*�v���C���[�̕`��*/

	/*�֘A*/
	void setHand(Hand *hand){ m_hand = hand; }	/*Hand�Ƃ̊֘A*/
};


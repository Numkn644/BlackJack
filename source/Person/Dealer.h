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
	void update();	/*更新*/
	bool hit(Card* card, bool turn);	/*ヒット*/
	void draw();	/*プレイヤーの描画*/

	/*関連*/
	void setHand(Hand *hand){ m_hand = hand; }	/*Handとの関連*/
};


#pragma once
#include "Person.h"
#include "../Hand/Hand.h"

class Player : public Person
{
private:
	int m_coins;
	Hand *m_hand;	/*手札*/
public:
	Player();
	~Player();
public:
	//void bet();		/*ベット*/
	void update();		/*データの更新*/
	bool hit(Card* card, bool turn);	/*ヒット*/
	void draw();	/*プレイヤーの描画*/

	/*関連*/
	void setHand(Hand *hand) {m_hand = hand;}	/*Handとの関連*/
};


#pragma once
#include "Person.h"
#include "../Hand/Hand.h"
#include "../Issue/Issue.h"

class Player : public Person
{
private:
	int m_coins;
	Hand *m_hand;	/*手札*/
	Issue *m_state;	/*勝敗*/
public:
	Player();
	~Player();
public:
	//void bet();		/*ベット*/
	void update();		/*データの更新*/
	bool hit(Card* card, bool turn);	/*ヒット*/
	void draw();	/*プレイヤーの描画*/

	/*セッタ*/
	void setState(Issue* issue){ m_state = issue; }	/*勝ち負けを設定*/

	/*関連*/
	void setHand(Hand *hand) {m_hand = hand;}	/*Handとの関連*/
};


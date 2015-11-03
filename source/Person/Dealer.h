#pragma once
#include "Person.h"
#include "../Hand/Hand.h"

class Dealer : public Person
{
public:
	Dealer();
	~Dealer();
public:
	void initialize();	/*初期化*/
	void update();	/*更新*/
	bool hit(Card* card, bool turn);	/*ヒット*/
	bool moreLessSeventeen();		/*17以上かを判定*/
	void turn();		/*手札を表にする*/
	void draw();	/*ディーラーの描画*/
};


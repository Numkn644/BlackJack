#pragma once
#include "Issue.h"

class Lose : public Issue
{
public:
	Lose();
	~Lose();
public:
	void message();
	void animation();
	int liquidate(int bet);

	/*セッタ*/
	void setAnimation(Animation *animation);	/*アニメーションの設定*/
};


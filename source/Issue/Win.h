#pragma once
#include "Issue.h"
#include "../Animation/Animation.h"

class Win : public Issue
{
public:
	Win();
	~Win();
public:
	void message();
	void animation();
	int liquidate(int bet);

	/*セッタ*/
	void setAnimation(Animation *animation);	/*アニメーションの設定*/
};


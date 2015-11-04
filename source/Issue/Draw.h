#pragma once
#include "Issue.h"

class Draw : public Issue
{
public:
	Draw();
	~Draw();
public:
	void message();
	void animation();
	int liquidate(int bet);

	/*セッタ*/
	void setAnimation(Animation *animation);	/*アニメーションの設定*/
};


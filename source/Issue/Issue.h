#pragma once
#include "DxLib.h"
#include "../Animation/Animation.h"

class Issue
{
protected:
	Animation *m_animation;		/*アニメーションとの関連*/
public:
	Issue();
	virtual ~Issue();
public:
	virtual void message() = 0;
	virtual void animation() = 0;
	virtual int liquidate(int bet) = 0;	/*清算する*/
	virtual void setAnimation(Animation* animation) = 0;	/*アニメーションの設定*/
};


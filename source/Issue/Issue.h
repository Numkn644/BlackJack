#pragma once
#include "DxLib.h"
#include "../Animation/Animation.h"

class Issue
{
protected:
	Animation *m_animation;		/*�A�j���[�V�����Ƃ̊֘A*/
public:
	Issue();
	virtual ~Issue();
public:
	virtual void message() = 0;
	virtual void animation() = 0;
	virtual int liquidate(int bet) = 0;	/*���Z����*/
	virtual void setAnimation(Animation* animation) = 0;	/*�A�j���[�V�����̐ݒ�*/
};


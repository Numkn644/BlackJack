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

	/*�Z�b�^*/
	void setAnimation(Animation *animation);	/*�A�j���[�V�����̐ݒ�*/
};


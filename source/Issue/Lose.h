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

	/*�Z�b�^*/
	void setAnimation(Animation *animation);	/*�A�j���[�V�����̐ݒ�*/
};


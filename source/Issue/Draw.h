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

	/*�Z�b�^*/
	void setAnimation(Animation *animation);	/*�A�j���[�V�����̐ݒ�*/
};


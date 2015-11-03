#pragma once
#include "DxLib.h"

class Issue
{
public:
	Issue();
	virtual ~Issue();
public:
	virtual void message() = 0;
	virtual int liquidate(int bet) = 0;	/*´Z‚·‚é*/
};


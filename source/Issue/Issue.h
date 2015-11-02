#pragma once
#include "DxLib.h"

class Issue
{
public:
	Issue();
	virtual ~Issue();
public:
	virtual void message() = 0;
};


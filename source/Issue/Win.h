#pragma once
#include "Issue.h"

class Win : public Issue
{
public:
	Win();
	~Win();
public:
	void message();
	int liquidate(int bet);
};


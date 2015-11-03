#pragma once
#include "Issue.h"

class Lose : public Issue
{
public:
	Lose();
	~Lose();
public:
	void message();
	int liquidate(int bet);
};


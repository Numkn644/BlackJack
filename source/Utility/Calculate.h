#pragma once
#include <vector>
#include <algorithm>
#include "../Card/Card.h"

class Calculate
{
private:
	int sum;	/*ŒvŽZŒ‹‰Ê*/
public:
	Calculate();
	~Calculate();

public:
	int calc(std::vector<Card*> cards);
};


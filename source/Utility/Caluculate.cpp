#include "Calculate.h"


Calculate::Calculate()
{
}


Calculate::~Calculate()
{
}

int Calculate::calc(std::vector<Card*> cards)
{
	sum = 0;
	auto calculate = [&](Card* card){
		if (card->getNumber() >= 11 && card->getNumber() <= 13){ sum += 10; }
		else if (card->getNumber() == 1){
			if (sum >= 11){ sum += 1; }
			else{ sum += 11; }
		}
		else{ sum += card->getNumber(); }
	};

	std::for_each(cards.begin(), cards.end(), calculate);

	return sum;
}
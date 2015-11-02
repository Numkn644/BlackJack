#pragma once
#include "../Card/Card.h"
#include "../Utility/Handle.h"
#include <vector>
#include <algorithm>

#include <cstdio>

class Hand
{
private:
	std::vector<Card*> m_hand;	/*èD*/
	std::vector<Card*> m_calcHand;	/*ŒvZ—pèD*/
	int m_score;			/*ƒXƒRƒA*/
	unsigned int m_counter;	/*èD‚Ì–‡”ƒJƒEƒ“ƒ^*/

public:
	Hand();
	~Hand();

public:
	void initialize();	/*èD‚Ì‰Šú‰»*/
	bool addHand(Card* card, int x, int y, bool turn);	/*èD‚ÉƒJ[ƒh‚ğ‰Á‚¦‚é*/
	void draw();	/*èD‚ğ•`‰æ*/


	/*ƒQƒbƒ^*/
	int getScore(){ return m_score; }
};


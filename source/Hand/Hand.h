#pragma once
#include "../Card/Card.h"
#include "../Utility/Handle.h"
#include <vector>
#include <algorithm>

#include <cstdio>

class Hand
{
private:
	std::vector<Card*> m_hand;	/*手札*/
	std::vector<Card*> m_calcHand;	/*計算用手札*/
	int m_score;			/*スコア*/
	unsigned int m_counter;	/*手札の枚数カウンタ*/

public:
	Hand();
	~Hand();

public:
	void initialize();	/*手札の初期化*/
	bool addHand(Card* card, int x, int y, bool turn);	/*手札にカードを加える*/
	void draw();	/*手札を描画*/


	/*ゲッタ*/
	int getScore(){ return m_score; }
};


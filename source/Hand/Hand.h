#pragma once
#include "../Card/Card.h"
#include "../Utility/Handle.h"
#include <vector>
#include <algorithm>

#include <cstdio>

class Hand
{
private:
	std::vector<Card*> m_hand;	/*��D*/
	std::vector<Card*> m_calcHand;	/*�v�Z�p��D*/
	int m_score;			/*�X�R�A*/
	unsigned int m_counter;	/*��D�̖����J�E���^*/

public:
	Hand();
	~Hand();

public:
	void initialize();	/*��D�̏�����*/
	bool addHand(Card* card, int x, int y, bool turn);	/*��D�ɃJ�[�h��������*/
	void draw();	/*��D��`��*/


	/*�Q�b�^*/
	int getScore(){ return m_score; }
};


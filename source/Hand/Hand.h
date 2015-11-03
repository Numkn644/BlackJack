#pragma once
#include "../Card/Card.h"
#include "../Utility/Handle.h"
#include "../Utility/Calculate.h"
#include <vector>
#include <algorithm>

#include <cstdio>

class Hand
{
private:
	std::vector<Card*> m_hand;	/*��D*/
	std::vector<Card*> m_calcHand;	/*�v�Z�p��D*/
	Calculate m_calc;			/*�v�Z�@�\*/
	int m_score;			/*�X�R�A*/
	unsigned int m_counter;	/*��D�̖����J�E���^*/

public:
	Hand();
	~Hand();

public:
	void initialize();	/*��D�̏�����*/
	void update();		/*�f�[�^�̍X�V*/
	bool addHand(Card* card, int x, int y, bool turn);	/*��D�ɃJ�[�h��������*/
	void turnToFace();	/*��D���܂Ƃ߂ĂЂ�����Ԃ�*/
	void draw();	/*��D��`��*/
	void drawScore(int y);	/*�X�R�A��`��*/


	/*�Q�b�^*/
	int getScore(){ return m_score; }
};


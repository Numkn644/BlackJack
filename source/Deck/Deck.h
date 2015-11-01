#pragma once
#include "../Card/Card.h"
#include "../Utility/Random.h"
#include "../Utility/Handle.h"
#include "DxLib.h"
#include <vector>
#include <algorithm>


class Deck
{
private:
	std::vector<Card*> m_deck;	/*�f�b�L�x�N�g��*/

	int m_divHandle[60];	/*�����摜�ǂݍ��ݗp�n���h��*/
	Handle m_backHandle;	/*�J�[�h���ʗp�n���h��*/
	Random r;

	/*�����o�֐�*/
	void loadCards();		/*�摜�ꊇ���[�h*/
	void initSpades();		/*�X�y�[�h*/
	void initHearts();		/*�n�[�g*/
	void initDiamonds();	/*�_�C�A�����h*/
	void initClubs();		/*�N���u*/
	void initialize();		/*4��ނ̕��̃��[�h���܂Ƃ߂�*/

public:
	Deck();
	virtual ~Deck();

public:
	void construct();	/*�f�b�L���\�z*/
	void shuffle();		/*�f�b�L���V���b�t��*/
	Card* handCard();	/*�J�[�h��n��*/
	void popCard();		/*�f�b�L����J�[�h�����o��*/

};


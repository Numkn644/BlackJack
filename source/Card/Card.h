#pragma once
#include "Suits.h"
#include "DxLib.h"
#include "../Object.h"

class Card : Object
{
private:
	SUITS m_suits;	/*�J�[�h�̊G��*/
	int m_number;	/*�J�[�h�̐���*/
	bool m_face;	/*�\:true, ��false*/

public:
	Card();
	Card(SUITS suits, int number, int handle, int x, int y);
	virtual ~Card();

public:
	bool operator>(const Card &a) const { return m_number > a.m_number; }
	void drawFace();	/*�J�[�h�̕\��`��*/
	void drawBack(int handle);	/*�J�[�h�̗���`��*/
	void turnOver();	/*�J�[�h���Ђ�����Ԃ�*/

	/*�Z�b�^*/
	void setPos(int x, int y){ m_x = x; m_y = y; }		/*x,y��ݒ肷��*/

	/*�Q�b�^*/
	int getNumber(){return m_number;}	/*�J�[�h�̐������擾*/
	bool getFace(){	return m_face;}		/*�\���̏�Ԃ��擾*/
};


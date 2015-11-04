#pragma once
#include "DxLib.h"
#include <string>

class Animation
{
private:
	int m_handle;	/*�摜�n���h��*/
	unsigned int m_counter;		/*�A�j���[�V�����J�E���^*/
	int m_x;	/*x���W*/
	int m_y;	/*y���W*/

public:
	Animation();
	virtual ~Animation();

public:
	void initialize(char *image);	/*������*/
	void execute();		/*���s*/
	void draw();		/*�`��*/

protected:
	//void count();		/*�J�E���^�̍X�V*/
};


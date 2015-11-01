#include "Card.h"


Card::Card()
{
}

/*�����t���R���X�g���N�^*/
Card::Card(SUITS suits, int number, int handle, int x, int y) : m_suits(suits), m_number(number),
																m_face(false), Object(x, y, handle)
{

}


Card::~Card()
{
}

/*�J�[�h�̕\��`��*/
void Card::drawFace()
{
	DrawGraph(m_x, m_y, m_handle, TRUE);
}

/*�J�[�h�̗���`��*/
void Card::drawBack(int handle)
{
	DrawGraph(m_x, m_y, m_handle, TRUE);
}

/*�J�[�h���Ђ�����Ԃ�*/
void Card::turnOver()
{
	m_face ? m_face = false : m_face = true; 
}

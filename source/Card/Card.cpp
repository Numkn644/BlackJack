#include "Card.h"


Card::Card()
{
}

/*引数付きコンストラクタ*/
Card::Card(SUITS suits, int number, int handle, int x, int y) : m_suits(suits), m_number(number),
																m_face(false), Object(x, y, handle)
{

}


Card::~Card()
{
}

/*カードの表を描画*/
void Card::drawFace()
{
	DrawGraph(m_x, m_y, m_handle, TRUE);
}

/*カードの裏を描画*/
void Card::drawBack(int handle)
{
	DrawGraph(m_x, m_y, m_handle, TRUE);
}

/*カードをひっくり返す*/
void Card::turnOver()
{
	m_face ? m_face = false : m_face = true; 
}

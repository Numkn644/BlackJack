#pragma once
#include "Suits.h"
#include "DxLib.h"
#include "../Object.h"

class Card : Object
{
private:
	SUITS m_suits;	/*カードの絵柄*/
	int m_number;	/*カードの数字*/
	bool m_face;	/*表:true, 裏false*/

public:
	Card();
	Card(SUITS suits, int number, int handle, int x, int y);
	virtual ~Card();

public:
	bool operator>(const Card &a) const { return m_number > a.m_number; }
	void drawFace();	/*カードの表を描画*/
	void drawBack(int handle);	/*カードの裏を描画*/
	void turnOver();	/*カードをひっくり返す*/

	/*セッタ*/
	void setPos(int x, int y){ m_x = x; m_y = y; }		/*x,yを設定する*/

	/*ゲッタ*/
	int getNumber(){return m_number;}	/*カードの数字を取得*/
	bool getFace(){	return m_face;}		/*表裏の状態を取得*/
};


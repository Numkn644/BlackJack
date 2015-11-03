#pragma once
#include "../Card/Card.h"
#include "../Hand/Hand.h"
#include "../Utility/KeyboardInput.h"

class Person
{

protected:
	Hand *m_hand;
public:
	Person();
	virtual ~Person();

public:
	virtual bool hit(Card* card, bool turn) = 0;		/*ヒット*/
	bool stand();		/*スタンド*/
	bool vast();		/*バスト*/

	/*関連*/
	void setHand(Hand* hand){ m_hand = hand; }	/*手札との関連*/
};


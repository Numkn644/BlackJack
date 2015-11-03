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
	virtual bool hit(Card* card, bool turn) = 0;		/*�q�b�g*/
	bool stand();		/*�X�^���h*/
	bool vast();		/*�o�X�g*/

	/*�֘A*/
	void setHand(Hand* hand){ m_hand = hand; }	/*��D�Ƃ̊֘A*/
};


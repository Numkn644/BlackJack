#pragma once
#include "../Card/Card.h"

class Person
{

private:

public:
	Person();
	virtual ~Person();

public:
	virtual bool hit(Card* card, bool turn) = 0;		/*�q�b�g*/
	void stand(){};		/*�X�^���h*/
	void vast(){};		/*�o�X�g*/
};


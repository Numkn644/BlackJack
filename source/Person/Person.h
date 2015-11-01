#pragma once
#include "../Card/Card.h"

class Person
{

private:

public:
	Person();
	virtual ~Person();

public:
	virtual bool hit(Card* card, bool turn) = 0;		/*ヒット*/
	void stand(){};		/*スタンド*/
	void vast(){};		/*バスト*/
};


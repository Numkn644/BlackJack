#include "Person.h"


Person::Person()
{
}


Person::~Person()
{
}

bool Person::stand()
{
	if (KeyboardInput::Instance()->get(KEY_INPUT_S) == 1){ return true; }
	return false;
}

bool Person::vast()
{
	if (m_hand->getScore() > 21){ return true; }
	return false;
}
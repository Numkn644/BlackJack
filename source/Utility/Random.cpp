#include "Random.h"

Random::Random()
{
	srand(static_cast<unsigned int>(time(NULL)));
}

Random::~Random()
{

}
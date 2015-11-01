#pragma once
#include <cstdlib>
#include <ctime>

class Random
{
public:
	Random();
	~Random();
	
public:
	/*関数オブジェクト*/
	unsigned int operator()(unsigned int max)
	{
		double tmp = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
		return static_cast<unsigned int>(tmp * max);
	}
};
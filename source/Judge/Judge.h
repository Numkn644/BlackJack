#pragma once
#include "../Issue/Win.h"
#include "../Issue/Draw.h"
#include "../Issue/Lose.h"


class Judge
{
private:
	Issue* whoDidWin;	/*���s*/
public:
	Judge();
	~Judge();

public:
	Issue* execute(int playerScore, int dealerScore);	/*����*/
};


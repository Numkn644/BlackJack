#include "Judge.h"


Judge::Judge()
{
}


Judge::~Judge()
{
}

/*”»’è*/
Issue* Judge::execute(int playerScore, int dealerScore)
{
	whoDidWin = NULL;
	if (playerScore > 21){
		whoDidWin = new Lose();
	}
	else if (dealerScore > 21){
		whoDidWin = new Win();
	}
	else if (playerScore == dealerScore){
		whoDidWin = new Draw();
	}
	else if (playerScore > dealerScore){
		whoDidWin = new Win();
	}
	else if (playerScore < dealerScore){
		whoDidWin = new Lose();
	}
	else {
		whoDidWin = NULL;
	}

	return whoDidWin;

}

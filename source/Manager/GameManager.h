#pragma once
#include "../Person/Player.h"
#include "../Person/Dealer.h"
#include "../Deck/Deck.h"
#include "../Hand/Hand.h"
#include "../Judge/Judge.h"
#include "../Utility/KeyboardInput.h"

class GameManager
{
private:
	Player *m_player;	/*�v���C���[*/
	Dealer *m_dealer;	/*�f�B�[���[*/
	Deck *m_deck;		/*�f�b�L*/
	Hand *m_playerHand;	/*�v���C���[�̎�D*/
	Hand *m_dealerHand;	/*�f�B�[���[�̎�D*/
	Judge *m_judge;		/*����*/

public:
	GameManager();
	~GameManager();

public:
	void initialize();	/*����������*/
	void execute();		/*���s*/
	void finalize();	/*�I������*/
};


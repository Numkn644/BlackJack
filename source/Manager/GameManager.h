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
	Player *m_player;	/*プレイヤー*/
	Dealer *m_dealer;	/*ディーラー*/
	Deck *m_deck;		/*デッキ*/
	Hand *m_playerHand;	/*プレイヤーの手札*/
	Hand *m_dealerHand;	/*ディーラーの手札*/
	Judge *m_judge;		/*判定*/

public:
	GameManager();
	~GameManager();

public:
	void initialize();	/*初期化処理*/
	void execute();		/*実行*/
	void finalize();	/*終了処理*/
};


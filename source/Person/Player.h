#pragma once
#include "Person.h"
#include "../Hand/Hand.h"
#include "../Issue/Issue.h"
#include "../Animation/Animation.h"


class Player : public Person
{
private:
	int m_buttonHandle;	/**/

	int m_coins;	/*所持コイン*/
	int m_bets;		/*賭金*/
	Issue *m_state;	/*勝敗*/
	Animation *m_stateAnimation;	/*アニメーション*/

public:
	Player();
	~Player();
public:
	void bet();		/*ベット*/
	void initialize();	/*初期化*/
	void update();		/*データの更新*/
	void finalize();	/*終了処理*/
	bool hit(Card* card, bool turn);	/*ヒット*/
	void liquidate();	/*勝ち負けに応じて清算する*/
	void draw();	/*プレイヤーの描画*/

	/*セッタ*/
	void setState(Issue* issue);	/*勝ち負けを設定*/
	void setBet(){ m_coins -= m_bets; }				/*所持金からBet額を引く*/

};


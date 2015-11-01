#pragma once
#include "../Card/Card.h"
#include "../Utility/Random.h"
#include "../Utility/Handle.h"
#include "DxLib.h"
#include <vector>
#include <algorithm>


class Deck
{
private:
	std::vector<Card*> m_deck;	/*デッキベクトル*/

	int m_divHandle[60];	/*分割画像読み込み用ハンドル*/
	Handle m_backHandle;	/*カード裏面用ハンドル*/
	Random r;

	/*メンバ関数*/
	void loadCards();		/*画像一括ロード*/
	void initSpades();		/*スペード*/
	void initHearts();		/*ハート*/
	void initDiamonds();	/*ダイアモンド*/
	void initClubs();		/*クラブ*/
	void initialize();		/*4種類の柄のロードをまとめる*/

public:
	Deck();
	virtual ~Deck();

public:
	void construct();	/*デッキを構築*/
	void shuffle();		/*デッキをシャッフル*/
	Card* handCard();	/*カードを渡す*/
	void popCard();		/*デッキからカードを取り出す*/

};


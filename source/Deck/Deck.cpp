#include "Deck.h"


Deck::Deck()
{
}


Deck::~Deck()
{
	for (int i = 0; i < 60; i++){
		DeleteGraph(m_divHandle[i]);
	}
}

/*画像一括ロード*/
void Deck::loadCards()
{
	LoadDivGraph("image/cards.png", 60, 15, 4, 32, 64, m_divHandle);
}

/*スペード*/
void Deck::initSpades()
{
	for (int i = 0; i < 13; i++){
		m_deck.push_back(new Card(SPADES, i + 1, m_divHandle[i], 0, 0));
	}
}

/*ハート*/
void Deck::initHearts()
{
	for (int i = 15; i < 28; i++){
		m_deck.push_back(new Card(HEARTS, i - 14, m_divHandle[i], 0, 0));
	}
}

/*ダイアモンド*/
void Deck::initDiamonds()
{
	for (int i = 30; i < 43; i++){
		m_deck.push_back(new Card(DIAMONDS, i - 29, m_divHandle[i], 0, 0));
	}
}

/*クラブ*/
void Deck::initClubs()
{
	for (int i = 45; i < 58; i++){
		m_deck.push_back(new Card(CLUBS, i - 44, m_divHandle[i], 0, 0));
	}
}

/*4種類の柄のロードをまとめる*/
void Deck::initialize()
{
	initSpades();
	initHearts();
	initDiamonds();
	initClubs();
}

/*デッキを構築*/
void Deck::construct()
{
	loadCards();
	initialize();
	shuffle();
	m_backHandle.backHandle = m_divHandle[14];	/*裏面イメージをロード*/
}

void Deck::update()
{
	if (m_deck.size() < 5){
		initialize();
		shuffle();
	}
}

void Deck::shuffle()
{
	std::random_shuffle(m_deck.begin(), m_deck.end(), r);
}

Card* Deck::handCard()
{
	Card* tmp;
	tmp = m_deck.back();
	return tmp;
}

void Deck::popCard()
{
	m_deck.pop_back();
}
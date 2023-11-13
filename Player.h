#pragma once
#include"Participant.h"
#include"CardHolder.h"
//class CardHolder;
class Player:public Participant
{
public:
	bool Move();//行動::勝負するかしないか
	//void  ShowCard(CardHolder* cardholder);//カードを見せる
	//int CardSumSetter(int sum);//カードの合計を返す
//private:
//	int _cardSum=0;//出た目の合計
//	int _card=0;//出た目
};
#pragma once
#include"Participant.h"
#include"CardHolder.h"
//class CardHolder;
class Dealer:public Participant
{
public:
	bool Move();//行動::勝負するかしないかの判断
	//int CardSumSetter(int sum);//カードの合計を返す
//private:
//	int _cardSum = 0;//出た目の合計
//	int _card = 0;//出た目
	bool _move=false;
};
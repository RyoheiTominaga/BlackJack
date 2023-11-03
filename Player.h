#pragma once
#include"Participant.h"
class Player:public Participant
{
public:
	bool Move();//行動::勝負するかしないか
	//int CardSumSetter(int sum);//カードの合計を返す
//private:
//	int _cardSum=0;//出た目の合計
//	int _card=0;//出た目
};
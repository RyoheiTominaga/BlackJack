#pragma once
class Participant {
public:
	int CardSumSetter(int sum,bool trun);//カードの合計を返す
	
public:
	int _cardSum = 0;//出た目の合計
	int _card = 0;//出た目
	int _pOneCard = 0;//プレイヤ―のACE所持数
	int _dOneCard = 0;//ディーラのACE所持数
};
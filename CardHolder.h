#pragma once
const int maxCard = 52;
class CardHolder {
public:
	CardHolder(int maxCards);
	int kind();//種類
	int num();//数字
	void distribute();//配るカード
	void ShowCard();//カード情報見せる
private:
	int _card[maxCard+1];
	int _cardNum;
	int _rand;
};
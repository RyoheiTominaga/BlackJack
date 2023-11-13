#include"CardHolder.h"
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
CardHolder::CardHolder(int maxCards) {
	for (int i = 0;i < maxCards;++i) {
		_card[i] = i+1;
		
	}
	_cardNum = 0;
	_cardNumber = 0;
}
int CardHolder::kind()//絵柄を返す
{
	int card = 13;
	int kind = 0;
	//メモ
	//const char* kinds[] = { "スペード:","ハート:","クローバー:","ダイヤ:" };

	kind=_cardNum/card;
	
	return kind;
}
int CardHolder::num() //数字を返す
{
	int card = 13;
	int num = 0;

	num =_cardNum%card;
	if (num == 0) {
		num = 13;
	}
	/*if (num > 10) {
		num = 10;
	}*/
	
	return num;
}
void CardHolder::distribute()//配るカード
{
	
	  _cardNum = _card[_cardNumber];
		printf("\nカードナンバー%d", _cardNum);
	
	  _cardNumber++;
		
}
//void CardHolder::ShowCard() {
//	int tenUpNum = 0;
//	int count = -1;
//	if (num() > 10) {
//		tenUpNum= num() - 11;
//		count++;
//	}
//	if (num() == 1) {
//		tenUpNum = 3;
//		count++;
//	}
//	const char* kinds[] = { "スペード:","ハート:","クローバー:","ダイヤ:" };
//	const char* tenUpNumber[] = { "J","Q","K" ,"A"};
//	if (count < 0) {
//		printf("出たカード:%s%d\n", kinds[kind()], num());
//	}
//	else {
//		printf("出たカード:%s%s\n", kinds[kind()], tenUpNumber[tenUpNum]);
//	}
//}
void CardHolder::Shuffle(int cards) {
	int randam = 0;
	int count = 0;
	int counts = 0;
	srand((unsigned int)time(NULL));
	for (int i = 0;i < cards;++i) {
		randam = rand() % (cards - i);
		swap(_card[randam], _card[cards - (i + 1)]);
	}
}

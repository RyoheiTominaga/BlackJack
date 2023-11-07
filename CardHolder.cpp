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
	_rand = 2;
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
	int cardNumber = -1;
	if (_rand==2) {
		cout << "よびだし" << endl;
		srand((unsigned int)time(NULL));
		_rand = 0;
	}
		do {
			cardNumber = rand() % 52;
		} while (_card[cardNumber] == 0);

		//printf("カードナンバー%d", cardNumber);
		_card[cardNumber] = 0;
		_cardNum = cardNumber+1;
		_rand++;
}
void CardHolder::ShowCard() {
	int tenUpNum = 0;
	int count = -1;
	if (num() > 10) {
		tenUpNum= num() - 11;
		count++;
	}
	if (num() == 1) {
		tenUpNum = 3;
		count++;
	}
	const char* kinds[] = { "スペード:","ハート:","クローバー:","ダイヤ:" };
	const char* tenUpNumber[] = { "J","Q","K" ,"A"};
	if (count < 0) {
		printf("出たカード:%s%d\n", kinds[kind()], num());
	}
	else {
		printf("出たカード:%s%s\n", kinds[kind()], tenUpNumber[tenUpNum]);
	}
}

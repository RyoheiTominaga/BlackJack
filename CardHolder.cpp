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
int CardHolder::kind()//�G����Ԃ�
{
	int card = 13;
	int kind = 0;
	//����
	//const char* kinds[] = { "�X�y�[�h:","�n�[�g:","�N���[�o�[:","�_�C��:" };

	kind=_cardNum/card;
	
	return kind;
}
int CardHolder::num() //������Ԃ�
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
void CardHolder::distribute()//�z��J�[�h
{
	
	  _cardNum = _card[_cardNumber];
		printf("\n�J�[�h�i���o�[%d", _cardNum);
	
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
//	const char* kinds[] = { "�X�y�[�h:","�n�[�g:","�N���[�o�[:","�_�C��:" };
//	const char* tenUpNumber[] = { "J","Q","K" ,"A"};
//	if (count < 0) {
//		printf("�o���J�[�h:%s%d\n", kinds[kind()], num());
//	}
//	else {
//		printf("�o���J�[�h:%s%s\n", kinds[kind()], tenUpNumber[tenUpNum]);
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

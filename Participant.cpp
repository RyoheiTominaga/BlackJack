#include"Participant.h"
#include<iostream>

using namespace std;
//trun:trueディーラ、false:プレイヤ-,
int Participant::CardSumSetter(int sum, bool turn) {
	_card = sum;

	if (_card > 10) {
		_card = 10;
	}
	if (_card == 1) {
		if (_cardSum < 11 && turn) {
			_card = 11;
			_dOneCard++;
		}
		else if (_cardSum < 11 && turn == false) {
			_card = 11;
			_pOneCard ++ ;
		}
	}

	_cardSum += _card;
	if (turn) {
		if (_cardSum > 21 && _dOneCard > 0) {
			_cardSum -= 10;
			_dOneCard = 0;

		}
	}
	else if (turn == false) {
		if (_cardSum > 21 && _pOneCard > 0) {
			_cardSum -= 10;
			_pOneCard = 0;

		}
	}

	return  _cardSum;
}
void Participant::ShowCard(CardHolder* cardholder){
	int tenUpNum = 0;
	int count = -1;
	if (cardholder->num() > 10) {
		tenUpNum = cardholder->num() - 11;
		count++;
	}
	if (cardholder->num() == 1) {
		tenUpNum = 3;
		count++;
	}
	const char* kinds[] = { "スペード:","ハート:","クローバー:","ダイヤ:" };
	const char* tenUpNumber[] = { "J","Q","K" ,"A" };
	if (count < 0) {
		printf("出たカード:%s%d\n", kinds[cardholder->kind()], cardholder->num());
	}
	else {
		printf("出たカード:%s%s\n", kinds[cardholder->kind()], tenUpNumber[tenUpNum]);
	}
}

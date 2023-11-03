#include"Dealer.h"
#include<iostream>
using namespace std;

bool Dealer::Move()
{
	int matchNum = 0;
	if (_cardSum<17) {
		_move = false;
	}
	else {
		_move = true;
	}
	return _move;
}
int Dealer::CardSumSetter(int sum) {
	_card = sum;
	if (_card > 10) {
		_card = 10;
	}
	if (_card == 1) {
		if (_cardSum < 11) {
			_card = 11;
		}
	}
	_cardSum += _card;

	return  _cardSum;
}
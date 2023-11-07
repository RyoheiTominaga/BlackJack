#include"Participant.h"
#include<iostream>

using namespace std;
//trun:trueディーラ、false:プレイヤ-,
int Participant::CardSumSetter(int sum,bool trun) {
	_card = sum;
	
	if (_card > 10) {
		_card = 10;
	}
	if (_card == 1) {
		if (_cardSum < 11&&trun) {
			_card = 11;
			_dOneCard++;
		}
		else if(_cardSum < 11 && trun==false)
		{
			_card = 11;
			_dOneCard++;
		}
	}
	
	_cardSum += _card;
	if (_cardSum > 21 && _dOneCard> 0) {
		_cardSum -= 10;
		_dOneCard = 0;
		
	}
	else if (_cardSum > 21 && _pOneCard > 0) {
		_cardSum -= 10;
		_pOneCard = 0;
	
	}
	
	return  _cardSum;
}

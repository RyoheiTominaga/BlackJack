#include"Participant.h"
using namespace std;
int Participant::CardSumSetter(int sum) {
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
#include"Player.h"
#include"CardHolder.h"
#include<iostream>
using namespace std;
class CardHolder;
//Player::Player(const Player& other) {
//	_cardSum = other._cardSum;
//}
bool Player::Move()
{
	int matchNum = 0;
	bool match = false;
	while (matchNum < 1 || matchNum>2) {
		cout << "1:stand\n2:hit\n" << endl;
		cin >> matchNum;
		switch (matchNum)
		{
		case 1:match = true;break;
		case 2:match = false;break;
		}
	}
	
	return match;
}
//void Player::ShowCard(CardHolder* cardholder) {
//	
//	int tenUpNum = 0;
//	int count = -1;
//	if (cardholder->num() > 10) {
//		tenUpNum = cardholder->num() - 11;
//		count++;
//	}
//	if (cardholder->num() == 1) {
//		tenUpNum = 3;
//		count++;
//	}
//	const char* kinds[] = { "スペード:","ハート:","クローバー:","ダイヤ:" };
//	const char* tenUpNumber[] = { "J","Q","K" ,"A" };
//	if (count < 0) {
//		printf("出たカード:%s%d\n", kinds[cardholder->kind()], cardholder->num());
//	}
//	else {
//		printf("出たカード:%s%s\n", kinds[cardholder->kind()], tenUpNumber[tenUpNum]);
//	}
//}
//int Player::CardSumSetter(int sum) {
//	_card = sum;
//	if (_card > 10) {
//		_card = 10;
//	}
//	if (_card == 1) {
//		if (_cardSum < 11) {
//			_card = 11;
//		}
//	}
//	_cardSum += _card;
//	
//	return  _cardSum;
//}

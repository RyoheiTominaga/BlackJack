#pragma once
#include"CardHolder.h"
class CardHolder;

class Participant {
public:
	int CardSumSetter(int sum,bool trun);//�J�[�h�̍��v��Ԃ�
	void ShowCard(CardHolder* cardHolder);
public:
	int _cardSum = 0;//�o���ڂ̍��v
	int _card = 0;//�o����
	int _pOneCard = 0;//�v���C���\��ACE������
	int _dOneCard = 0;//�f�B�[����ACE������
};
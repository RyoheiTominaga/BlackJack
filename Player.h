#pragma once
#include"Participant.h"
#include"CardHolder.h"
//class CardHolder;
class Player:public Participant
{
public:
	bool Move();//�s��::�������邩���Ȃ���
	//void  ShowCard(CardHolder* cardholder);//�J�[�h��������
	//int CardSumSetter(int sum);//�J�[�h�̍��v��Ԃ�
//private:
//	int _cardSum=0;//�o���ڂ̍��v
//	int _card=0;//�o����
};
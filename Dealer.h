#pragma once
class Dealer {
public:

	bool Move();//�s��::�������邩���Ȃ���
	int CardSumSetter(int sum);//�J�[�h�̍��v��Ԃ�
private:
	int _cardSum = 0;//�o���ڂ̍��v
	int _card = 0;//�o����
	bool _move=false;
};
#pragma once
const int maxCard = 52;
class CardHolder {
public:
	CardHolder(int maxCards);
	int kind();//���
	int num();//����
	void distribute();//�z��J�[�h
	void ShowCard();//�J�[�h��񌩂���
private:
	int _card[maxCard+1];
	int _cardNum;
	int _rand;
};
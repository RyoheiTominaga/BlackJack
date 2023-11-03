// BlackJack.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

//簡単なブラックジャックを作成しなさい。
//
//■ゲームの流れ
//１．カードの配布
//ディーラーとプレイヤーに１枚ずつ配布。
//さらにプレイヤーに１枚配布。
//この時点でそれぞれのカード、スコア表示
//
//２．勝負開始
//プレイヤーはstand or hitを選ぶ（standかバーストするまで繰り返し）
//->hitした場合
//バーストしたらその時点で終了とする
//逐一カード情報, スコアは表示
//
//->standした場合
//3.へ
//
//３．ディーラーの自動処理
//ディーラーは17未満かつバースト以外ならhitを続ける
//
//ここは結果のみカード情報表示でOK.
//
//４．結果表示
//スコアが21に近い方が勝ち。
//
//■ゲーム仕様
//引き分けでも終了でOK.つまり１回勝負。
//カードは52枚（つまりババ以外）
//スコアはAは1 or 11, 2～10はそのまま、J, Q, Kは10とする。
//Aはその時点でのスコアにより自動計算される。
//カードはダブることはない。
//カード種別も表示すること
//記載のない表示のされ方はお任せ。
//
//■プログラムルール
//オブジェクト指向プログラミングにてコーディングを行う　例＞Cardクラス、Playerクラスなど
//必要ならエラー処理も可能な範囲で行うこと。
//まずは教科書P312までの技術を使うこと。
#include <iostream>
#include"CardHolder.h"
#include"Player.h"
#include"Dealer.h"
using namespace std;
int main()
{
	int maxCard = 54;
	int count = 0;
	CardHolder card(maxCard);
	int pNum = NULL, dNum = NULL;
	int pSum = NULL, dSum = NULL;
	Player player;
	Dealer dealer;
	bool match = false;
	do{
		if (count == 0) {
			card.distribute();
			card.ShowCard();
			pNum = card.num();
			pSum = player.CardSumSetter(pNum);
			cout << "Player:" << pSum<<"\n\n";
			card.distribute();
			card.ShowCard();
			dNum = card.num();
			dSum = dealer.CardSumSetter(dNum);
			cout << "Dealer:" << dSum<<"\n\n";
		}
		else {
			card.distribute();
			card.ShowCard();
			pNum = card.num();
			pSum = player.CardSumSetter(pNum);
			cout << "Player:" << pSum << "\n\n";
			if (pSum > 21) {
				cout << "\nPlayer: バースト..." << endl;
				count = 0;
				break;
			}
		}
		count++;
		match=player.Move();
		
	} while (match==false);

	do {
		card.distribute();
		card.ShowCard();
		dNum = card.num();
		dSum = dealer.CardSumSetter(dNum);
		cout << "Dealer:" << dSum << "\n\n";
		if (dSum > 21) {
			if (count > 0) {
				cout << "Dealer: バースト..\nプレイヤーの勝利";
				count = 0;
			}
			else if (count==0){
				
				cout << "Dealer: バースト..共倒れ☆" << endl;
				count = 0;
			}

		}
		dealer.Move();
	} while (dealer.Move() == false);
	
	if (count>0) {
	

		if (pSum > dSum) {
			cout << "\n勝利\n" << endl;
		}
		else {
			cout << "\n敗北\n" << endl;
		}
		cout << "player::" << pSum << "\nDealer::" << dSum << endl;
	}
}
	
	/*int a[10] = { 4,5,6,48,12,54,8,76,3,0 };
	int min = 100, minNum = -1;
	for (int i = 0;i < 10;++i) {
		for (int j = i;j < 10;++j) {
			if (min > a[j]) {
				min = a[j];
				minNum = j;
			}
		}
		swap(a[i], a[minNum]);
		min = 100;
	}
	for (int i = 0;i < 10;++i) {
		cout<<"\n" << a[i] <<"\n";
	}*/
	
	


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int length = 0;
	for (int i = 0, size = s.length();i < size;i ++) {
		if (s[i] == 'B') length --; // 1文字戻る
		else {
			s[length] = s[i]; // Bでないならその数字を保存
			length ++; // で、1文字長さが増える
		}
		if (length < 0) length = 0; // 空ならこれ以上減らないので
	}
	cout << s.substr(0, length);
	return 0;
}
/*
31536000のコメント解説欄
ここテンプレで用意してるから、A問題とかだとこの先空欄の危険あり

まず、Bが入力されない限り与えられたsと同じ文字が出力される
次に、Bが入力されると、1個入力されるたびに出力文字数は2文字減るし、Bの手前を上書きする
これは、上のコードのように書くと簡潔に実装できるね
*/
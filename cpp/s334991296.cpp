#include<iostream>

using namespace std;

int main() {

	//入力する文字列
	string input_s;
	//出力する文字列
	string output_s;

	//入力
	cin >> input_s;

	for (int i = 0; i < input_s.length(); i++) {
		//cout << input_s[i] << endl;
		if (input_s[i]=='0') {
			//入力が0の時
			output_s += "0";
		}
		else if (input_s[i] == '1') {
			//入力が1の時
			output_s += "1";
		}
		else if (input_s[i] == 'B') {
			//入力がBの時
			if (output_s.empty() != 1) {
				//出力文字列が空でない
				output_s = output_s.erase(output_s.length()-1);
			}
		}
	}

	//出力
	cout << output_s << endl;
}
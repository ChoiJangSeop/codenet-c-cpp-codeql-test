#include<iostream>
#include<string>
using namespace std;

int main() {
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '9') s[i] = 1;
		else s[i] = 9;
	}
	cout << s << endl;

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	vector<char>s(S.size());
	int n = 0;
	for (int i = 0;i < S.size();i++) {

		if (S[i] == 'B') {
			if (n != 0) {
				s[n - 1] = '\0';
				n--;
			}
		}
		else {
			s[n] = S[i];
			n++;
		}
	}
	for (int i = 0;i < s.size();i++) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s, f="";
	cin >> s;
	int n = s.length();
	for(int i=0; i<n; i++) {
		if(s[i] == 'B') {
			s[i] = '9';
			s[i-1] = '9';
		}
	}
	for(int i=0; i<n; i++) {
		if (s[i] != '9') {
			f+= s[i];
		}
	}
	cout << endl;
	return 0;
}

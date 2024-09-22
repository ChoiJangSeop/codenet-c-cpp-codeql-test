#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	string s;	cin >> s;
	string ans = "";
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '1') {
			ans += '1';
		}
		else if (s[i] == '0') {
			ans += '0';
		}
		else if (s[i] == 'B'&&s.size() > 0) {
			ans.pop_back();
		}
	}
	cout << ans << endl;
	cin >> s;
}
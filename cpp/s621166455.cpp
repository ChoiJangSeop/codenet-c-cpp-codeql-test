#include <bits/stdc++.h>

using namespace std;

int main () {
	string S;
	cin >> S;

	string ans;
	for (auto c : S) {
		if (c == 'B') {
			if (!ans.empty()) {
				ans.pop_back();
			}
		} else {
			ans.push_back(c);
		}
	}

	cout << ans << endl;
}
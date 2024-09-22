#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string t;
	for (auto c : s) {
		if (c == 'B') {
			if (!t.empty())
				t.pop_back();
		}
		else {
			t.push_back(c);
		}
	}
	cout << t << endl;
	return 0;
}
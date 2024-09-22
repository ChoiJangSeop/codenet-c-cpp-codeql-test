#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a.at(i);
	}
	vector<int> b(a);
	sort(a.rbegin(), a.rend());
	if (a.at(0) == a.at(1)) {
		for (int i = 0; i < n; i++) {
			cout << a.at(0) << endl;
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (b.at(i) == a.at(0)) {
				cout << a.at(1) << endl;
			} else {
				cout << a.at(0) << endl;
			}
		}
	}
}

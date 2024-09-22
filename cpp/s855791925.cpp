#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	vector<int> b(n);
	b = a;
	sort(a.begin(), a.end());
	int max = a[a.size() - 1];
	rep(i, n) {
		if (b[i] == max) cout << a[a.size() - 2] << endl;
		else cout << max << endl; 
	}
	return 0;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1 << 29;
 
int main() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	rep(i, n) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(), b.end(), greater<int>());
	rep(i, n) {
		if (a[i] == b[0]) cout << b[1] << endl;
		else cout << b[0] << endl;
	}
	return 0;
}
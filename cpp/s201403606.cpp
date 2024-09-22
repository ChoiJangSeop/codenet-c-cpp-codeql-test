#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	vector<int> a(n), b;
	rep(i, n) cin >> a[i];
	b = a;
	sort(all(a));
	reverse(all(a));
	int mx1 = a[0];
	int mx2 = a[1];
	rep(i, n) {
		if(b[i] == mx1) cout << mx2 << endl;
		else cout << mx1 << endl;
	}
	return 0;
}
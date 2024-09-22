#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(4);
	
	long long W, H, x, y;

	cin >> W >> H >> x >> y;

	double ans = double(W) * double(H) / 2;

	if (x == W / 2 && y == H / 2) {
		cout << ans << " 1\n";
	} else {
		cout << ans << " 0\n";
	}

	return 0;
}
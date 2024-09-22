#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <cstring>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <ctime>
#include <bitset>
#include <complex>

using namespace std;

#define int long long

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int h, w, x, y;
	cin >> w >> h >> x >> y;
	cout << (w * h) / 2 << endl;
	if (2 * x == w || 2 * y == h) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
}

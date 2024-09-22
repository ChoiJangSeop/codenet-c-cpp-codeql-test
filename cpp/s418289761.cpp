#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#define rep(i, n) for (int i = 0; i < (n); i++)
const long long MOD = 1000000007;
using namespace std;
typedef long long ll;
map<ll, int> mp;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double r;
	cin >> r;
	cout << fixed << setprecision(10) << r * r * 3.14159265358979 << " " << 2.0 * r * 3.14159265358979 << endl;
	return 0;
}

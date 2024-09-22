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
const long long MOD = 1000000007;
using namespace std;
typedef long long ll;
map<ll, int> mp;
signed main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	int tmp = 0;
	int tmp2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
		if (tmp < a[i]) {
			tmp2 = tmp;
			tmp = a[i];
		}
		else if (tmp2 < a[i]) {
			tmp2 = a[i];
		}
	}
	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == tmp) counter++;
	}
	if (counter == 1) {
		for (int i = 0; i < n; i++) {
			if (a[i] == tmp) {
				cout << tmp2 << endl;
			}
			else {
				cout << tmp << endl;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << tmp << endl;
		}
	}

	return 0;
}
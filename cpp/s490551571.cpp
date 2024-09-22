#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <climits>
#include <numeric>
#include<stdio.h>
#include <queue>
#include <iomanip>
#include <float.h>
#include <set>
#include<functional>
#include <stack>
#include <time.h>
#include <climits>
#include <bitset>
#include <fstream>
using namespace std;
typedef pair<int, int>p;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
vector<long long> divisor(long long n) {
	vector< long long> ret;
	for (long long i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			ret.push_back(i);
			if (i * i != n) ret.push_back(n / i);
		}
	}
	sort(begin(ret), end(ret));
	return (ret);
}
struct LazySegmentTree {
private:
	int n;
	vector<int> node, lazy;
	vector<bool> lazyFlag;

public:
	LazySegmentTree(vector<int> v) {
		int sz = (int)v.size();
		n = 1; while (n < sz) n *= 2;
		node.resize(2 * n - 1);
		lazy.resize(2 * n - 1, INT_MAX);
		lazyFlag.resize(2 * n - 1, false);

		for (int i = 0; i<sz; i++) node[i + n - 1] = v[i];
		for (int i = n - 2; i >= 0; i--) node[i] = min(node[i * 2 + 1], node[i * 2 + 2]);
	}

	void lazyEvaluate(int k, int l, int r) {
		if (lazyFlag[k]) {
			node[k] = lazy[k];
			if (r - l > 1) {
				lazy[k * 2 + 1] = lazy[k * 2 + 2] = lazy[k];
				lazyFlag[k * 2 + 1] = lazyFlag[k * 2 + 2] = true;
			}
			lazyFlag[k] = false;
		}
	}

	void update(int a, int b, int x, int k = 0, int l = 0, int r = -1) {
		if (r < 0) r = n;
		lazyEvaluate(k, l, r);
		if (b <= l || r <= a) return;
		if (a <= l && r <= b) {
			lazy[k] = x;
			lazyFlag[k] = true;
			lazyEvaluate(k, l, r);
		}
		else {
			update(a, b, x, 2 * k + 1, l, (l + r) / 2);
			update(a, b, x, 2 * k + 2, (l + r) / 2, r);
			node[k] = min(node[2 * k + 1], node[2 * k + 2]);
		}
	}

	int find(int a, int b, int k = 0, int l = 0, int r = -1) {
		if (r < 0) r = n;
		lazyEvaluate(k, l, r);
		if (b <= l || r <= a) return INT_MAX;
		if (a <= l && r <= b) return node[k];
		int vl = find(a, b, 2 * k + 1, l, (l + r) / 2);
		int vr = find(a, b, 2 * k + 2, (l + r) / 2, r);
		return min(vl, vr);
	}
};
long long mod = 1000000007;
signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(16);
	long long w, h, x, y;
	cin >> w >> h >> x >> y;
	int cnt;
	if ((x == w / 2 && y != h / 2) || (y == h / 2 && x != w / 2))cnt = 0;
	else cnt = 1;
	cout << (double)(w*h / 2) << " " <<cnt ;
}
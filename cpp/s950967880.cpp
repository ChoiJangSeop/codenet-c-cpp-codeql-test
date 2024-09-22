#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111; 
using namespace std;
typedef long long lint;

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int W, H, x, y;
	cin >> W >> H >> x >> y;

	if (2 * x > W) x = W - x;
	if (2 * y > H) y = H - y;
	cout << max(x*H, y*W) << "\n";

	if (H == 2*y && W == 2*x ) cout << "1" << "\n";
	else cout << "0" << "\n";

	return 0;
}
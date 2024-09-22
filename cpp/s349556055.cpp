#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <fstream>
#include <iomanip>
using namespace std;

#define REP(i, a, b) for (int i = (int)a; i <= (int)b; i++)
#define fi first
#define sc second
#define pb push_back
#define double long double
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpii;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<int, int> pii;
typedef pair<i64, i64> pi64;
typedef vector<pi64> vpi64;

const i64 MOD = 1000000007;
const i64 INF = 2e15;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double w, h, x, y;
	cin >> w >> h >> x >> y;

	cout << setprecision(9) << fixed << (w * h) / 2 << " ";

	if (x * 2 == w && y * 2 == h) cout << 1 << endl;
	else cout << 0 << endl;

	return 0;
}
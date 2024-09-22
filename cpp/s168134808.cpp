#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) (int)a.size()
#define x first
#define y second
#define debug(...) cout << "[" << #__VA_ARGS__ << ": " << __VA_ARGS__ << "]\n"
#define rd() abs((int)rng())
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
const int maxn = 5e5 + 100;
const int mod = 1e9 + 7;
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0);
	ld w, h, x, y;
	cin >> w >> h >> x >> y;
	cout << setprecision(10) << fixed << (w * h) / 2 << " " << (w % 2 == 0 && h % 2 == 0 && x == w / 2 && y == h / 2) << "\n";
	return 0;
}
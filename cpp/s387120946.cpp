//↓template↓

#include "bits/stdc++.h"
using namespace std;
#define Would
#define you
#define all(n)  n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
typedef long long ll;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const double pi = acos(-1);
const ll SIZE = 1 << 17;
int dx[] = { 1,0,-1,0 }, dy[] = { 0,1,0,-1 }, alp[30];
ll fac[200005], finv[200005], inv[200005];
vector<ll>dij;
struct edge { ll to, cost; };
vector<vector<edge> >G;

ll mod_pow(ll a, ll b) {
	ll res = 1, mul = a;
	for (int i = 0; i < 31; ++i) {
		if (b >> i & 1) {
			res *= mul;
			res %= MOD;
		}
		mul = (mul * mul) % MOD;
	}

	return res;
}

void addedge(int from, int to, int cost) {
	G[from].push_back({ to,cost });
	G[to].push_back({ from,cost });
}


template<typename T>
vector<T> make_v(size_t a) { return vector<T>(a); }

template<typename T, typename... Ts>
auto make_v(size_t a, Ts... ts) {
	return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}

template<typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type
fill_v(T &t, const V &v) { t = v; }

template<typename T, typename V>
typename enable_if<is_class<T>::value != 0>::type
fill_v(T &t, const V &v) {
	for (auto &e : t) fill_v(e, v);
}

//↑template↑



int main() {
	long double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << setprecision(20) << (long double)((a / 2) * (b / 2)) << endl;
	if (a / 2 == c && b / 2 == d) { cout << 1 << endl; }
	else { cout << 0 << endl; }
}
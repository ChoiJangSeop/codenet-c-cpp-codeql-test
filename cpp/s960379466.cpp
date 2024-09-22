#include <queue>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
#include <map>
#include <functional>
#include <set>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define MAX(a, b) (((a) < (b)) ? (b) : (a))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pint;
const ll inf = (1LL << 60);
const ll mod = 1000000007;
ll max(ll a, ll b) {
	if (a < b)
		return b;
	else
		return a;

}
ll min(ll a, ll b) {
	if (a < b)
		return a;
	else
		return b;

}


template<typename T, T MOD = 1000000007>
struct Mint {
	T v;

	Mint() : v(0) {}
	Mint(signed v) : v(v) {}
	Mint(ll t) { v = t % MOD; if (v < 0) v += MOD; }

	Mint pow(ll k) {
		Mint res(1), tmp(v);

		while (k) {

			if (k & 1) res *= tmp;

			tmp *= tmp;
			k >>= 1;
		}



		return res;
	}

	Mint inv() { return pow(MOD - 2); }

	Mint& operator=(Mint a) { if (a.v >= MOD) a.v %= MOD; v = a.v; return *this; }
	Mint& operator+=(Mint a) { v += a.v; if (v >= MOD) v -= MOD; return *this; }
	Mint& operator-=(Mint a) { v += MOD - a.v; if (v >= MOD) v -= MOD; return *this; }
	Mint& operator*=(Mint a) { v = 1LL * v * a.v % MOD; return *this; }
	Mint& operator/=(Mint a) { return (*this) *= a.inv(); }
	Mint operator+(Mint a) const { return Mint(v) += a; }
	Mint operator-(Mint a) const { return Mint(v) -= a; }
	Mint operator*(Mint a) const { return Mint(v) *= a; }
	Mint operator/(Mint a) const { return Mint(v) /= a; }

	Mint operator-() { return v ? MOD - v : v; }
	bool operator==(const Mint a) const { return v == a.v; }
	bool operator!=(const Mint a) const { return v != a.v; }
	bool operator < (const Mint a) const { return a < a.v; }


};

using M = Mint<ll>;

int main() {
	double W, H, x, y;

	cin >> W >> H >> x >> y;



	printf("%.15f ", max(min((W - x) * H, x * H), min((H - y) * W, y * W)));

	if (W / 2.0 == x && H / 2.0 == y) {
		cout << 1 << endl;
		
	}
	else {
		cout << 0 << endl;

	}



	return 0;
}
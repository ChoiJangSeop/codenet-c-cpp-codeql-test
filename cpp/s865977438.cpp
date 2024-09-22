#define _USE_MATH_DEFINES
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iterator>
#include<sstream>
#include<iomanip>
#include<map>
#include<queue>
#include<deque>
#include<fstream>

#define rep(i, n) for (ll i = 0; i < n; i++) 
#define rrep(i, n) for(ll i = n-1; i>=0; i--)
#define range(i, n, m) for (ll i = n; i < m; i++) 
#define rrange(i, n, m) for (ll i = n - 1; i => m; i--) 
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define vvl vector<vector<ll> >
#define vp vector<pair<ll, ll> >
#define vvp vector<vector<pair<ll, ll> > >
#define First first
#define Second second.first
#define Third second.second
//#define MOD 998244353
#define MAX 100000

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

template<class T> inline bool chmax(T & a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T & a, T b) { if (a > b) { a = b; return true; } return false; }




int main() {
	//cin.tie(0);
	//ios::sync_with_stdio(false);

	ll N;
	cin >> N;

	vl A(N);
	rep(i, N) {
		cin >> A[i];
	}

	ll m = *max_element(A.begin(), A.end());
	ll mnum = max_element(A.begin(), A.end()) - A.begin();

	A.erase(A.begin() + mnum);

	ll m2 = *max_element(A.begin(), A.end());

	rep(i, N) {
		if (i == mnum) {
			cout << m2 << endl;
		}
		else {
			cout << m << endl;
		}
	}


	return 0;
}


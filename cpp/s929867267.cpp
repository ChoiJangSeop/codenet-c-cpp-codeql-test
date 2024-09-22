#include<bits/stdc++.h>
const long long INF = LLONG_MAX / 2;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define REP(i,n) FOR(i,0,n)
#define ll long long int
#define ALL(x) x.begin(),x.end()
using namespace std;
ll ans = 0, sum = 0, n, k, counter = 0, w, h;
string s;
vector<ll> v;
vector < pair<ll, ll > > vp;
vector<vector<ll> > vv(50, vector<ll>(50, INF));
vector<string> vs;
vector<char> vc;
vector<ll> vi;
/*--------------------template--------------------*/

int main() {
	cin >> s;
	n = s.size();
	REP(i, n) {
		if (s[i] == '0') {
			k = 0;
			v.push_back(k);
		}
		else if (s[i] == '1') {
			k = 1;
			v.push_back(k);
		}
		else if (s[i] == 'B' && v.size() != 0) {
			k = i - 1;
			v.erase(v.begin() + k);
		}
	}
	REP(i, v.size()) {
		cout << v[i];
	}
	cout << endl;
}
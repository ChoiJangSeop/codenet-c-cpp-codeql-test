#include<bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define rep(N) for (int i = 0; i < N; ++i)
#define Rep(a, b) for (int i = a; i < b; ++i)
#define For(i, N) for (int i = 0; i < N; ++i)
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define makei(N) int N; cin >> N;
#define makes(s) string s; cin >> s;
#define maked(d) double d; cin >> d;
#define makev(v, N) vi v(N); rep(N)cin >> v[i];
#define mod 1000000007

using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vb = vector<bool>;
using vvb = vector<vector<bool>>;
using vs = vector<string>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using msi = map<string, int>;

template<typename T>
void say(T s) {
	cout << s << "\n";
}

template<typename T>
void say(vector<T> s) {
	auto itr = s.begin();
	cout << *(itr++);
	while (itr != s.end()) {
		cout << " " << *(itr++);
	}
	cout << "\n";
}

template<typename T>
void say(vector<T> s,char r) {
	auto itr = s.begin();
	cout << *(itr++);
	while (itr != s.end()) {
		cout << r << *(itr++);
	}
	cout << "\n";
}

void yn(bool b) {
	if (b)say("yes");
	else say("no");
}

void Yn(bool b) {
	if (b)say("Yes");
	else say("No");
}

void YN(bool b) {
	if (b)say("YES");
	else say("NO");
}

template<typename T>
void maxi(T& a, T b) {
	a = max(a, b);
}

template<typename T>
void mini(T& a, T b) {
	a = min(a, b);
}

void exact_say(double x) {
	cout << setprecision(numeric_limits<double>::max_digits10) << x << endl;
}

template<class T> void getVector(vector<T>& v) {
	for (int i = 0; i < v.size(); ++i)
		cin >> v[i];
}

std::string revString(std::string s) {
	string ret;
	auto it = s.rend();
	while (it != s.rbegin()) {
		ret.push_back(*it);
		++it;
	}
	return ret;
}

signed main() {
	makei(n);
	makev(v, n);
	reverse(all(v));
	say(v);
}

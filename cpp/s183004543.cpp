#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <list>
#include <iomanip>
#include <queue>
#include <functional>
#include <cassert>
#include <cmath>
#include <set>
#include <map>
#include <numeric>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repe(i, n) for(int i = 0; i <= (n); i++)
#define fo(i, a, b) for(int i = (a); i < (b); i++)
#define foe(i, a, b) for(int i = (a); i <= (b); i++)
#define NL << endl

using namespace std;
using ll = long long;
const int INTMAX = numeric_limits<int>::max();
const int INTMIN = numeric_limits<int>::min();
const ll LLMAX = numeric_limits<long long>::max();
const ll LLMIN = numeric_limits<long long>::min();
const int MOD = 1000000007;
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }

using namespace std;

int main() {

	string s;

	cin >> s;

	rep(i, s.size()) {
		cout << (s[i] == '1') ? '9' : '1';
	}
	cout NL;


	return 0;

}


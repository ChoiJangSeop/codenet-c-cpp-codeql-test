#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector> 
#include <numeric>
#include <cmath>
#include <queue>
#include <iomanip>
#include <functional>
#include <stack>


#define CHMAX(a,b) a = std::max(a,b)
#define CHMIN(a,b) a = std::min(a,b)
#define CHABS(a) a = std::abs(a) 
#define COUT(a) std::cout << a << std::endl
#define CERR(a) std::cerr << a << std::endl
#define FOR(n) for(lli i = 0; i < n; i++)

using namespace std;
using lli = long long int;
using pll = pair<lli, lli>;
using tlll = tuple<lli, lli, lli>;
using vll = vector<lli>;

constexpr lli mod197 = 1000000007LL;
constexpr lli INF = 10000000000000;

// ax + by = gcd(a,b) 最大公約数
template< typename T >
T extgcd(T a, T b, T& x, T& y) {
	T d = a;
	if (b != 0) {
		d = extgcd(b, a % b, y, x);
		y -= (a / b) * x;
	}
	else {
		x = 1;
		y = 0;
	}
	return d;
}

int main(void) {

	string str;
	cin >> str;

	stack<char> s;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'B' && !s.empty()) {
			s.pop();
		}
		else if(str[i] != 'B'){
			s.push(str[i]);
		}
	}


	string ans = "";
	while (!s.empty()) {
		ans = s.top() + ans;
		s.pop();
	}

	COUT(ans);

	return 0;
}
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define FORR(i, m, n) for (int i = (m); i >= (n); --i)
#define equals(a, b) (fabs((a) - (b)) < EPS)
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const ll mod2 = 998244353;
const int INF = 1000000005;
const long double EPS = 1e-10;

int gcd(int x, int y) {
  if (y > x) swap(x, y);
  if (x % y == 0) return y;
  gcd(y, x % y);
}

int main() {
  int x, y;
  cin >> x >> y;

  cout << gcd(x, y) << endl;

  
  return 0;
}

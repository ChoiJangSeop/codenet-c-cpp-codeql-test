#include <bits/stdc++.h>
#define REP(i, N) for (int i = 0; i < (N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x, ll y) { return y ? gcd(y, x % y) : x; }
ll div_ceil(ll, ll);

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main() {
  long double W, H, x, y;
  std::cin >> W >> H >> x >> y;
  long double xmin = min(x, W - x);
  long double ymin = min(y, H - y);
  long double Sx = H * xmin;
  long double Sy = W * ymin;
  if (Sx < Sy) {
    std::cout << Sy << ' ' << 0 << '\n';
  } else if (Sx > Sy) {
    std::cout << Sx << ' ' << 0 << '\n';
  } else {
    std::cout << Sx << ' ' << 1 << '\n';
  }
}

ll div_ceil(ll a, ll b) {
  ll quotient = a / b;
  ll remainder = a % b;
  if (remainder == 0) {
    return quotient;
  } else {
    return quotient + 1;
  }
}

#include <bits/stdc++.h>
#define rep(i, n)     for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n)    for (int i = 1; i <= (int)(n); ++i)
#define irep(i, a, n) for (int i = a; i < (int)(n); ++i)
#define rrep(i, n)    for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n)   for (int i = (int)(n); i >= 1; --i)
#define allrep(V, v)  for (auto &&V : v)
#define all(x)        (x).begin(), (x).end()
using lint = long long;
constexpr int    INF  = 1 << 30;
constexpr lint   INFL = 1LL << 62;
constexpr int    MOD  = 1e9 + 7;
constexpr double EPS  = 1e-9;
using namespace std;

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int w, h, x, y;
  cin >> w >> h >> x >> y;
  lint ver = h * min(x, w - x);
  lint hor = w * min(y, h - y);
  cout << max(ver, hor) << "\n" << (ver == hor) << endl;
  return 0;
}
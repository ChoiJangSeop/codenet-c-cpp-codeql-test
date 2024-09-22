#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, x, y;
  cin >> W >> H >> x >> y;

  bool flag = false;
  if ((W % 2 == 0 && W / 2 == x) && (H % 2 == 0 && H / 2 == y))
    flag = true;
  double ans = W * H / 2.0;
  printf("%.9f %d\n", ans, flag ? 1 : 0);
}
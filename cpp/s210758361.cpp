#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <tuple>
#include <vector>
using namespace std;
typedef long long ll;
ll const INF = 1LL << 60;

int main() {
  double W, H, x, y;
  cin >> W >> H >> x >> y;
  long double x_area = min(W - x, x) * H;
  long double y_area = min(H - y, y) * W;
  long double area = max(x_area, y_area);
  int cnt = 1;
  if (x_area == y_area) {
    cnt++;
  }
  cout << fixed << setprecision(10) << area << " " << (1 < cnt) << endl;
  return 0;
}
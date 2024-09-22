#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
  if (a >= b) return b;
  else return a;
}

int main() {
  int W, H, x, y;
  cin >> W >> H >> x >> y;
  
  long double S1 = (double)min(x, W - x) * H;
  long double S2 = (double)min(y, H - y) * W;
  
  if (S1 > S2) {
    cout << fixed << setprecision(6) << S1;
    cout << " " << 0 << endl;
  }
  else if (S1 == S2) {
    cout << fixed << setprecision(6) << S1;
    cout << " " << 1 << endl;
  }
  else {
    cout << fixed << setprecision(6) << S2;
    cout << " " << 0 << endl;
  }
}

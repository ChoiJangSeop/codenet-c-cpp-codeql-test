#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b) {
  if (b == 0)
    return a;
  else
    return GCD(b, a % b);
}

int main() {
  int x, y;
  cin >> x >> y;

  //if (y > x) swap(x, y);
  cout << GCD(x, y) << endl;
}

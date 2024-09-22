#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
  int a, b, c, cnt;
  while (cin >> a >> b) {
    c = a + b;
    cnt = 0;
    while (c > 0) {
      cnt ++;
      c /= 10;
    }
    cout << cnt << endl;
  }
}


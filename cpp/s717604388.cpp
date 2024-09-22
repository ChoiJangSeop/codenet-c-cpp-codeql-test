#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int a, b;
  if (x >= y) {
    a = x;
    b = y;
  }
  else {
    a = y;
    b = x;
  }

  while (a % b != 0) {
    int tmp;
    tmp = a % b;
    a = b;
    b = tmp;
  }

  cout << b << endl;


}

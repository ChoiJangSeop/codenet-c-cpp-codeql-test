#include <iostream>
using namespace std;

int main() {
  int a, b, d, x, y;
  cin >> x >> y;
  b = x;
  d = y;
  while (true) {
    a = b;
    b = d;
    d = a % b;
    if (d == 0) {
      break;
    }
  }
  cout << b << endl;
  return 0;
}


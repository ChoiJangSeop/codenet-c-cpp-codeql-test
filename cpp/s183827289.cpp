#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <cassert>
using namespace std;

int gcd(int x, int y) {
  if(x < y) {
    std::swap(x, y);
  }

  if(y <= 0) {
    return x;
  } else {
    int r = x % y;
    return gcd(y, r);
  }
}

int main() {
  int x,y;
  cin >> x >> y;
  cout << gcd(x,y) << endl;
}


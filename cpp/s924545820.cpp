#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(3);
  a.at(0) = n / 100;
  a.at(1) = (n - n / 100 * 100) / 10;
  a.at(2) = n % 10;
  vector<int> b(3); = {a.at(0), a.at(1), a.at(2)};
  rep(i, 3) {
    if (a.at(i) == 9) b.at(i) = 1;
    else if (a.at(i) == 1) b.at(i) = 9;
  }
  cout << b.at(0) << b.at(1) << b.at(2) << endl;
}

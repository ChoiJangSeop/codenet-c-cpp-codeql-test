#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string res;
  for (char c : s) {
    if (c == 'B') {
      res.pop_back();
    } else {
      res += c;
    }
  }
  cout << res << '\n';
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  string ans;
  while (cin.eof()) {
    char c; cin >> c;
    if (c != 'B') ans.push_back(c);
    else if (ans.size() > 0) ans.pop_back();
  }
  cout << ans << endl;
}

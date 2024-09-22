#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  string s;
  cin >> s;

  for (ll i = 0; i < s.size(); ++i) {
    if (s[i] == '1') cout << '9';
    else if (s[i] == '9') cout << '1';
    else cout << s[i];
  }
  cout << endl;

  return 0;
}
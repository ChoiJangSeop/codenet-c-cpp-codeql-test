// #include <bits/stdc++.h>
#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define loop(i, x, n) for (int i = (x); i < (n); i++)
#define all(v) (v).begin(), (v).end()
#define int long long
using namespace std;
const int MOD = 1e9 + 7;
const int INF = 1e10;
template<typename T> void cmax(T &a, T b) { a = max(a, b); }
template<typename T> void cmin(T &a, T b) { a = min(a, b); }

signed main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == '1')
      cout << '9';
    else
      cout << '1';
  }
  cout << endl;
  return 0;
}

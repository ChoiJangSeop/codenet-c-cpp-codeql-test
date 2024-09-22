#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int INF = 1e9;

int main() {
  string s;
  cin >> s;
  vector<char> v;

  rep(i, s.length()) {
    if (s[i] == '0') v.push_back('0');
    if (s[i] == '1') v.push_back('1');
    if (s[i] == 'B' && v.size() > 0) v.erase(v.end() - 1);
  }

  for (int i = 0; i < v.size(); ++i) {
    cout << v[i];
  }
  return 0;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<char> v;
  rep(i, s.length()) {
    char c = s[i];
    if (c == '0') v.push_back('0');
    if (c == '1') v.push_back('1');
    if (c == 'B' && v.size() > 0) v.pop_back();
  }

  rep(i, v.size()) {
    cout << v[i];
  }
  cout << endl;
  return 0;
}
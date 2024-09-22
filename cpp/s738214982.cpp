#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; ++i)
using namespace std;

int main() {
  int n, f = 0, s = 0;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  rep(i, n) f = max(f, v[i]);
  rep(i, n) if(v[i] != f) s = max(s, v[i]);
  rep(i, n){
    if(v[i] == f) cout << s << endl;
    else cout << f << endl;
  }
  return 0;
}
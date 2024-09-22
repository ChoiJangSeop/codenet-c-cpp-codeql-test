#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
using namespace std;

int main () {
  int x, y, ans;
  cin >> x >> y;

  while (1) {
    if (x >= y) {
      ans = y;
      x = x % y;
      if (x == 0) {
        break;
      }
    } else {
      ans = x;
      y = y % x;
      if (y == 0)
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
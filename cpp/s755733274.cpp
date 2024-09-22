#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll = long long;

int main(){
  ll W,H; cin >> W >> H;
  ll x,y; cin >> x >> y;
  long double ans = W*H/2;
  int ans2 = 0;
  if(x == W/2 && y == H/2) ans2 = 1;
  cout << ans << ' ' << ans2 << endl;
}


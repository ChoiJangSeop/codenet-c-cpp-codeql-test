#include <bits/stdc++.h>
using namespace std;

int main() {
  double w,h,x,y;
  cin>>w>>h>>x>>y;
  
  double ans = w * h / 2.0;
  // ans = max(ans, min(w-x,x) * h);
  // ans = max(ans, min(h-y,y) * w);
  cout << fixed << setprecision(10) << ans << " ";
  cout << (w*y==x*h?1:0) << endl;
  return 0;
}
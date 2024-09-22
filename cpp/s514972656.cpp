#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
int gcd(int x,int y) {
  if(x<y)swap(x,y);
  x%=y;
  for(int i=min(x,y);i>0;i--){
    if(x%i==0&&y%i==0)return i;
  }
}

signed main() {
  int x,y; cin>>x>>y; cout<<gcd(x,y)<<endl;
}

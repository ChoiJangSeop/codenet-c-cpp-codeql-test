#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
using namespace std;

int main(){
  double w,h,x,y;
  cin>>w>>h>>x>>y;
  double s=w*h/2;
  int ans=0;
  if (2*x==w && 2*y==h){
    ans=1;
  }
  cout<<fixed<<setprecision(9)<<s<<' '<<ans;

}

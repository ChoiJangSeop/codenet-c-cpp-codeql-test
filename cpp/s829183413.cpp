#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
  int W,H,x,y;cin>>W>>H>>x>>y;
  if(W*H%2==0){
    cout<<W*H/2<<" ";
    if(x==W/2&&y==H/2)cout<<1<<endl;
    else cout<<0<<endl;
  }
  else cout<<W*H/2<<"."<<5<<" "<<0<<endl;
}

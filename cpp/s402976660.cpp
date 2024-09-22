#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define repi(i,a,n) for(int (i)=(a);(i)<(n);(i)++)
int main() {
  int n,a1e,a1v,a2v=0;
  cin>>n;
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  a1e=max_element(a.begin(),a.end())-a.begin();
  rep(i,n){
    if(i!=a1e) a2v=max(a2v,a[i]);
  }
  a1v=a[a1e];
  rep(i,n){
    if(i==a1e) cout<<a2v<<endl;
    else cout<<a1v<<endl;
  }
  return 0;
}

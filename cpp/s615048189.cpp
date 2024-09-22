#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
const int MAX_N=2e5+1;
int n,a1e,a1v=0,a2v=0;
int a[MAX_N];

int main() {
  cin>>n;
  rep(i,n) cin>>a[i];
  a1e=max_element(a,a+n)-a;
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
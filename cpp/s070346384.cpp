#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n; cin>>n;
  vector<int> A(n,0),B(n,0);
  rep(i,n){
    cin>>A.at(i);
    B.at(i)=A.at(i);
  }
  sort(B.begin(),B.end());
  reverse(B.begin(),B.end());
  int MAX=B.at(0);
  if(B.at(0)!=B.at(1)){
    rep(i,n) (A.at(i)==MAX) ?cout<<B.at(1)<<endl :cout<<MAX<<endl;
  }else rep(i,n)cout<<MAX<<endl;
}
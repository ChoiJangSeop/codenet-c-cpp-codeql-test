#include<bits/stdc++.h>
using namespace std;

int main(){
  int w,h,x,y;
  cin>>w>>h>>x>>y;
  cout<<(w+h)/2;
  if(2*x==w&&2*y==h) cout<<1<<endl;
  else cout<<0<<endl;
}
  

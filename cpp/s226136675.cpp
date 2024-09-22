#include <bits/stdc++.h>
using namespace std;

int main(void) {
  
  long long W,H,x,y;
  cin>>W>>H>>x>>y;
  vector<long long> V={x*y,(W-x)*y,x*(H-y),(W-x)*(H-y)};

  sort(V.begin(),V.end());
  
  if (W*y!=H*x && W*H!=x*H+y*W) {
    cout<<abs(V[0]+V[2])<<endl;
    cout<<0<<endl;
  }
  
  else {
    cout<<abs(V[0]+V[2])<<endl;
    cout<<1<<endl;
  }
  return 0;
}
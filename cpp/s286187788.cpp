#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
  int r;
  if(x<y) swap(x,y);
  while(y) r=x%y,x=y,y=r;
  return x;
}

int main(){
  int x;
  int y;
  cin>>x>>y;

  cout<< gcd(x,y)<<endl;

  return 0;
}


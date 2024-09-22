#include <bits/stdc++.h>
using namespace std;

int main(){
  long long w,h,x,y;
  cin>>w>>h>>x>>y;
  double s=w*h/2;
  if(x+x==w && y+y==h){
    cout<<s<<' '<<'1'<<endl;
  }else{
    cout<<s<<' '<<'0'<<endl;
  }
}
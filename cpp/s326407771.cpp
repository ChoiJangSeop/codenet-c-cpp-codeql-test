#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int w,h,x,y;
cin>>w>>h>>x>>y;
cout<<1.0*w*h/2.0<<" ";
if(x==w/2.0||y==h/2.0)cout<<1;
else cout<<0;
}
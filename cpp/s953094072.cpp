#include <bits/stdc++.h>
using namespace std;
 
int main() {
int w,h,x,y;
  cin >>w>> h>> x >> y;
int mens = w*h;
  
  if(w%2==1 || h%2==1)
     cout << mens/2 << " "<<0<<endl;
  else if(x==w/2 && y==h/2)
    cout << mens/2 << " "<< 1  <<endl;
  else
    cout << mens/2 << " "<<0<<endl;
}
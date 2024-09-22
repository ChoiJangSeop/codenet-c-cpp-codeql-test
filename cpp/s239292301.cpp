#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
typedef long long ll;

int main(void){
    double w,h,x,y;
    cin >> w >> h >> x >> y;
    double cal;
  	cal  = w*h/2.0;
    
    cout << cal << " ";
  	if(x==w/2.0 && y==h/2.0){
      cout << 1;
    }
  	else{
      cout << 0;
    }
  
    return 0;
}























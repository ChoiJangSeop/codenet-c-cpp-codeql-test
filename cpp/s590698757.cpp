#include<bits/stdc++.h>
using namespace std;
int main(){
  float w,h;
  int x,y;
  cin >> w >> h >> x >> y;
  if(x==w/2.0 && y==h/2.0) cout << w/2.0*h << " "<< 1;
  else cout << w/2.0*h <<" " << 0;
}

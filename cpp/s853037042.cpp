#include<bits/stdc++.h>
using namespace std;

int main(){
  double W, H, x, y;
  cin >> W >> H >> x >> y;
  cout << setprecision(5) << W*H/2 << " ";
  if(x==W/2 && y==H/2){
    cout << 1 << endl;
  }
  else{
    cout << 0 << endl;
  }
}
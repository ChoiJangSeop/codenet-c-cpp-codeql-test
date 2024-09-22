#include <bits/stdc++.h>
using namespace std;

int main() {
  double W, H, x, y;
  double S;
  int p;
  cin >> W >> H >> x >>y;
  
  if(x == W/2 && y == H/2){
    p = 1;
  }
  else{
    p = 0;
  }
  if(W < H){
    if(x < W/2){
      S = x * H;
    }
    else{
      S = (W * H) - (x * H);
    }
  }
  else{
    if(y < H/2){
      S = W * y;
    }
    else{
      S = (W * H) - (W * y);
    }
  }
  cout << fixed << setprecision(9) <<S << " " << p << endl;
}
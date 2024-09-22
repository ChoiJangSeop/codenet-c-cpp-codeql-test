#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, x, y;
  cin >> W >> H >> x >> y;
  int out = 0;
  double S;
  S = (W * H) / 2;
  if((W % 2) == 0){
    if((H % 2) == 0){
      if((W / 2) == x){
        if((H / 2) == y){
          out = 1;
        }
      }
    }
  }
  cout << S << " " << out;
}
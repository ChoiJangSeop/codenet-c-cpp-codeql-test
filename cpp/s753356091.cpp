#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){
  int W, H, x, y;
  cin >> W >> H >> x >> y;
  double w = 0, h = 0;
  if(x > (W-x)){
    w = (W - x) * H;
  }else{
    if(x == 0){
      w = W * H;
    }else{
      w = x * H;
    }
  }
  if(y > (H - y)){
    h = (H - y) * W;
  }else{
    if(y == 0){
      h = W * H;
    }else{
      h = y * W;
    }
  }
  int ans = 0;
  if(w == h){
    ++ans;
  }
  cout << (double)max(w, h) << " " << ans << endl;
  
  return 0;
}

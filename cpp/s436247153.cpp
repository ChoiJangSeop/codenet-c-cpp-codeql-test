#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <iomanip>
#include <map>
using namespace std;

long long int w, h, x, y;

long double func(long long int x0, long long int y0, int id){
  //cout << "x0:" << x0 << " y0:" << y0 << endl;
  //cout << "x:" << x << " y:" << y << endl;
  if(y0 - y == 0 || x0 - x == 0) return 0;
  long double a = (double)(y0 - y) / (x0 - x);
  long double b = y0 - a * x0;
  long double x1, y1, s;
  if(id == 0){
    x1 = w;
    y1 = a * x1 + b;
    if(y1 > h){
      y1 = h;
      x1 = (y1 - b) / a;
      s = h * x1 / 2;
    }
    else s = w * y1 / 2;
  }
  else if(id == 1){
    x1 = w;
    y1 = a * x1 + b;
    if(y1 < 0){
      y1 = 0;
      x1 = (y1 - b) / a;
      s = h * x1 / 2;
    }
    else s = w * (h - y1) / 2;
  }
  else if(id == 2){
    x1 = 0;
    y1 = a * x1 + b;
    if(y1 < 0){
      y1 = 0;
      x1 = (y1 - b) / a;
      s = h * (w - x1) / 2;
    }
    else s = w * (h - y1) / 2;
  }
  else{
    x1 = 0;
    y1 = a * x1 + b;
    if(y1 > h){
      y1 = h;
      x1 = (y1 - b) / a;
      s = h * (w - x1) / 2;
    }
    else s = w * y1 / 2;
  }
  //cout << fixed << setprecision(10);
  //cout << "a:" << a << " b:" << b << endl;
  //cout << "x1:" << x1 << " y1:" << y1 << " s:" << s << endl;
  return s;
}

void solve(){
  cin >> w >> h >> x >> y;

  long double s[6];
  s[0] = min(x, w - x) * h;
  s[1] = min(y, h - y) * w;
  s[2] = func(0, 0, 0);
  s[3] = func(0, h, 1);
  s[4] = func(w, h, 2);
  s[5] = func(w, 0, 3);

  long double maxs = s[0];
  for(int i = 1; i < 6; i++){
    if(s[i] > maxs){
      maxs = s[i];
    }
  }
  int sum = 0;
  for(int i = 0; i < 6; i++){
    //cout << fixed << setprecision(10) << s[i] << endl;
    if(fabs(s[i] - maxs) < 0.0000000001) sum++;
  }

  cout << fixed << setprecision(10) << maxs << endl;
  if(sum > 1) cout << 1 << endl;
  else cout << 0 << endl;

  return;
}

int main(){
  solve();
  return 0;
}

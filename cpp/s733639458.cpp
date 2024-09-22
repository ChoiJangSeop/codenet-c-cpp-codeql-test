#include<iostream>
#include<set>
using namespace std;
double menseki(long x, long y, long W, long H, long px, long py);
double Xseppen(long y, long x1, long a, long y1, long b);
double Yseppen(long x, long x1, long a, long y1, long b);
int main(){
  long W, H, x, y;
  cin >> W >> H >> x >> y;
  set<pair<long, long>> vecs;
  vecs.insert(pair<long,long>(0,0));
  vecs.insert(pair<long,long>(0,H));
  vecs.insert(pair<long,long>(W,0));
  vecs.insert(pair<long,long>(W,H));
  vecs.insert(pair<long,long>(x,0));
  vecs.insert(pair<long,long>(0,y));

  double largest = 0;
  int cnt = 0;
  for(pair<long,long> v: vecs){
//    cout << v.first << " " << v.second << " ";
    double now = menseki(x, y, W, H, v.first, v.second);
//    cout << now << endl;
    if(now > largest){
      largest = now;
    }else if(largest == now){
      cnt++;
    }
  }
  cout << largest << " ";
  if(cnt > 0){
    cout << 1;
  }else{
    cout << 0;
  }
  return 0;
}
double menseki(long x, long y, long W, long H, long px, long py){
  if(x != px && y != py){
    double xs1 = Xseppen(H, x,px, y,py);
    double xs2 = Xseppen(0, x,px, y,py);
    if(xs1 == 0 && xs2 == 0){
      return 0;
    }else if(xs1 == W && xs2 == W){
      return 0;
    }else if(xs1 == 0 || xs2 == 0){
      double xs3 = xs1==0 ? xs2 : xs1;
      if(xs3 > W){
        double ys = Yseppen(W, x, px, y, py);
        return ys*W/2;
      }else{
        return xs3 * H / 2;
      }
    }else if(xs1 == W || xs2 == W){
      double xs3 = xs1 == W ? xs2 : xs1;
      if(xs3 < 0){
        double ys = Yseppen(0, x,px, y,py);
        return ys*W/2;
      }else{
        return (W-xs3) * H / 2;
      }
    }else{
      return 0;
    }
  }else if(x == px){
	long smaller = W-px < px ? W-px : px;
    return (double)smaller*H;
  }else if(y == py){
    long smaller = H-py < py ? H-py : py;
    return (double)smaller*W;
  }
}


double Xseppen(long y, long x1, long a, long y1, long b){
  //(y1-b)*(x-x1) = (y-y1)*(x1-a)
  double x = (double)((y-y1) * (x1-a)) /(double)(y1-b) + (double)x1;
  return x;
}

double Yseppen(long x, long x1, long a, long y1, long b){
  //(y1-b)*(x-x1) = (y-y1)*(x1-a)
  double y = (double)((x-x1) * (y1-b)) / (double)(x1-a)  + (double)y1;
  return y;
}
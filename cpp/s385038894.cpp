#include<bits/stdc++.h>
using namespace std;
  int main(){
    int W,H,x,y;
    cin >> W >> H >> x >> y;
    vector<double>A(4);
    bool flag = false;
    if(W/2==x && H/2==y){
      flag = true;
    }
    double ans = H*W/2;
    cout << fixed << setprecision(6) <<ans << " " << flag << endl;
      
  }

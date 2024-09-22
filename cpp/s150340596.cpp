#include <bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  int tmp;
  cin >> x >> y;
  while(y!=0){
    if(x > y){
      tmp = y;
      y = x % y;
      x = tmp;
    }else{
      tmp = x;
      y = y % x;
      y = tmp;
    }
  }
  cout << x << endl;

  return 0;
}
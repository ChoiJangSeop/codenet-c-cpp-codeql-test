#include <iostream>
using namespace std;

int god(int x, int y){
  int r;
  if(x < y) swap(x, y);
  while(y > 0){
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main(){
  int x, y;
  cin >> x >> y;
  cout << god(x, y) << "\n";
  return 0;
}


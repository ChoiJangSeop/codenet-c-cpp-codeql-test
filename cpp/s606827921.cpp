#include <iostream>
using namespace std;

int gcd(int x,int y){
  while(x%y){
    if(x<y){
      swap(x,y);
    }
    x=x%y;
  }
  return y;
}

int main(){
  int x,y,z;
  cin >> x >> y;

  z=gcd(x,y);

  cout << z << "\n";

  return 0;
}


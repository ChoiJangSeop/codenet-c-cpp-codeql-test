#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int x, y, a, b;
  cin>>x>>y;
  a=max(x, y);
  b=min(x, y);
  while(b != 0){
    int r = a;
    a = b;
    b = r % b;
  }
  cout<<a<<endl;
  return 0;
}


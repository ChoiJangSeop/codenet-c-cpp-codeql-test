#include<iostream>
int gcd(int x,int y){
  if(x%y == 0){
    return y;
  }else{
    return gcd(y,x%y);
  }
}

int main()
{
  int a,b;
  std::cin >> a >> b;
  if (a < b){
    int tmp = a;
    a = b;
    b = tmp;
  }

  std::cout << gcd(a,b) << std::endl;
  return 0;
}


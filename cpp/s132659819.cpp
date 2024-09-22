
#include<iostream>
#include<thread>
#include<chrono>
#include<cstdlib>

int gcd(int x,int y)
{
  int r;
  if(x>y){
    do{
      r=x%y;
      x=y;
      y=r;
    }while(r>0);
    return x;
  }else{
    do{
      r=y%x;
      y=x;
      x=r;
    }while(r>0);
    return y;
  }
}

int main()
{
  int a,b;
  std::cin>>a>>b;
  std::cout<<gcd(a,b)<<'\n';
  return 0;
}

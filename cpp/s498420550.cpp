#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
  int a, b;
  double pi;

  pi = acos(-1);
  cin>>a;
  printf("%.15lf %.15lf\n", 2*pi*a, pi*a*a);

}
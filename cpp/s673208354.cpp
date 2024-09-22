#include<stdio.h>
using namespace std;

int main(){
  int r;
  double s, l;
  scanf("%f", &r);
  s = 3.141592653589 * r * r;
  l = 2 * 3.141592653589 * r;
  printf("%f %f\n",s, l);
  return 0;
}


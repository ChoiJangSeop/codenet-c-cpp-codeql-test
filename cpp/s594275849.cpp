#include<cmath>
#include<stdio.h>
//using namespace std;
//scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);

//printf("Yes\n");
int main() {
  int r;
  scanf("%d",&r);
  double L=2*r*3.1415926535;
  double S=r*r*3.1415926535;
  printf("%.6lf %.6lf\n",S,L);
}
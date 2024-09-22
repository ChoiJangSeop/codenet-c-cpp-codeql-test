#include<stdio.h>
int gcd(int,int);
int main(){
  int x,y;
  
  scanf("%d%d",&x,&y);
  
  printf("%d\n",gcd(x,y));
  
  return 0;
}

int gcd(int x,int y){
  return y%x ? gcd(y%x,x) : x;
}


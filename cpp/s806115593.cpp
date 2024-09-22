#include <stdio.h>

int main(){

  int a,b,c,r,x,y,flag;

  scanf("%d%d",&a,&b);

  if(a >= b){
    flag = 0;
    c = b;
  }
  else{
    c = a;
    flag = 1;
  }
  
  if(flag == 0) r = a % b;
  if(flag == 1) r = b % a;

  while(1){
    x = c % r;
    if(x == 0) break;
    c = x;
    r = c;
  }

  printf("%d\n",r);

  return 0;
}
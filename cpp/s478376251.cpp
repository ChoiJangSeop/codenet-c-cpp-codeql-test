#include <stdio.h>
int main(){
  int a,b,c,n;
  scanf("%d",&n);
  c=n%10;
    n=n-c;
  b=n%100;
  n=n-b;
  if(c==1) c=9;
    else c=1;
      if (b==10) b=90;
        else b=10;
  if (n==100) n=900;
  else n=100;
  printf("%d",a+b+n);
  return 0;
}
#include <stdio.h>

main(){

  int d = 1;
  int a,b,c;

  scanf("%d %d",&a,&b);

if(b>a){
c = a;
a = b;
b = c;
}

  while(d != 0){
    d = a % b;
    a = b;
    b = d;
  }

  printf("%d",a);

}
#include <stdio.h>

main(){

  long d = 1;
  long a,b,c;

  scanf("%ld %ld",&a,&b);

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

  printf("%ld",a);

}
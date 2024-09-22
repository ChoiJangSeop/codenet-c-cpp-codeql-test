#include <stdio.h>

int main(){
  int x,y,z=1;

  scanf("%d %d",&x,&y);
  while(z != 0){
    z = x % y;
    x = y;
    y = z;
  }
printf("%d\n",x);
}


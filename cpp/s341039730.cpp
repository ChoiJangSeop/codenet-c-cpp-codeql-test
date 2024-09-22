#include<stdio.h>

int main(void){
  int x,y;
  int rem=0;
  scanf("%d %d",&x,&y);
  while(true){
    rem=x%y;
    if(rem==0){
      break;
    }
    x=y;
    y=rem;
  }
  printf("%d\n",y);
  return 0;
}


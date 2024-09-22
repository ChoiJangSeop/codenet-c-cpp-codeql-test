#include<stdio.h>

int main(){
  int val;
  int val2;
  scanf("%d",&val);
  if((val % 10) == 9){
    val2 = 1;
  }else{
    val2 = 9;
  }
  if(((val / 10) % 10) == 9){
    val2 = val2 + 10;
  }else{
    val2 = val2 +  90;
  }
  if((val / 100) == 9){
    val2 = val2 + 100;
  }else{
    val2 = val2 + 900;
  }
  printf("%d\n",val2);
  return 0;
}
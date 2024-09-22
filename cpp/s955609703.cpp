#include<stdio.h>

int saiki (int, int);

int main(){
  int x,y,a;

  scanf("%d%d",&x,&y);
  
  a = saiki(x,y);

  printf("%d\n",a);

  return 0;
}

int saiki (int x, int y){

  int temp;
  // y を小さいほうにする
  if(x < y) {
    temp = x;
    x = y;
    y = temp;
  }

  
  if(x % y  == 0) return y;

  return saiki(x%y,y);

}




  
    


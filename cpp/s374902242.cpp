#include<stdio.h>
int main(){
  int i,N,j;
  int a[100];
  scanf("%d",&N);
  for(i=N-1;i>=0;i--){
    scanf("%d",&a[i]);
  }
  for(j=0;j<=N-1;j++){
  if(j == N - 1) {
    printf("%d\n",a[j]);
  }
  else{
    printf("%d ", a[j]);
  }
  }
     return 0;
}
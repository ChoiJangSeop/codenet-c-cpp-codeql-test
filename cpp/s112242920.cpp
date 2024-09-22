#include<stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int A[N];
  for(int i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  int B[N]
  for(int i=0;i<N,i++){
    for(int j=0;j<N-1;j++){
      if(i>j)
        B[N]=A[N];
      else
        B[N]=A[N+1];
    }
    int max=0;
     for(int j=0;j<N-1;j++){
       if(B[j]>max)
         max=B[j]
     }
    printf("%d",max);
    return 0;
  }
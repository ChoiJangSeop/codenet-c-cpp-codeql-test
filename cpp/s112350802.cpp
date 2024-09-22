#include <iostream>
#include <math.h>
using namespace std;

int N;
int c=0;

int main(){
  if(scanf("%d", &N)==0);
  int a[N]={0};
  for(int i=0; i<N; i++){
    if(scanf("%d", &a[i])==0);
  }
  int max=0;
  int max2=0;
  for(int i=0; i<N; i++){
    if(max < a[i]){
      max = a[i];
      c=i;
    }
  }
  for(int i=0; i<N; i++){
    if(max2 < a[i] && i!=c){
      max2 = a[i];
    }
  }
  for(int i=0; i<N; i++){
    if(i==c){
      printf("%d %d\n", max2, max);
    } else {
      printf("%d %d\n", max, max2);
    }
  }
  
  return 0;
}
#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n],i;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int k=0,m;
  for(i=0;i<n;i++){
    if(a[i]>=k){
      k=a[i];
      m=i;
    }
  }
  int l=0;
  for(i=0;i<n;i++){
    if(a[i]>=l&&i!=m){
      l=a[i];
    }
  }
  for(i=0;i<n;i++){
    if(m==i){
      printf("%d\n",l);
    }
    else{
      printf("%d\n",k);
    }
  }
}

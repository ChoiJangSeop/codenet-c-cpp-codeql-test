#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 100

int main(void)
{
  int n,a[MAX];
  do{
    cin >> n;
  }while(n > MAX || n < 0);

  for(int i = 0;i < n;i++){
    cin >> a[i];
  }

  for(int i = n - 1;i > 0;i--){
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}
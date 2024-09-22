#include <bits/stdc++.h>
#include <math.h>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
 
int main(){
  int i;
  int n;
  cin >> n;
  int a[n];
  int max, semi, max_index, semi_index;
  cin >> a[0];
  max = a[0]; semi = a[0];
  for(i=1;i<n;i++){
    cin >> a[i];
    if(max<a[i]){
      semi = max;
      max = a[i];
      max_index = i;
    }
    else if(semi<a[i]){
      semi = a[i];
    }
  }
  for(i=0;i<n;i++){
    if(i==max_index){
      printf("%d\n",semi);
    }
    else{
      printf("%d\n",max);
    }
  }

  return 0;
}
#include<iostream>
#include<cstdio>

using namespace std;
#define MAX_N 200
int a,b;
int s;
int Count;
int main(){
  Count = 0;
  scanf("%d %d",&a,&b);
  s = a+b;
  for(; s != 0; s/=10){
    Count++;
  }
  

  cout << Count<<endl;
  return 0;
}
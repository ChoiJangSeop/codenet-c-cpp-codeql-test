#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
void p(int n){
  if(n==0)return;
  int c;
  c=n%10;
  p(n/10);
  c=10-c;
  cout<<c;
}
int main(){
  int n;
  cin>>n;
  p(n);
  return 0;
}

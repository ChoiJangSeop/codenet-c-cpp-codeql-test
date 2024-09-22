#include<cstdlib>
#include<iostream>
using namespace std;

int gcd(int x,int y){
  int m;
  if(x>y){
    for(int i=y;i>0;i--)
      if(x%i==0){
	m=i;
    break;
      }
  }else{
    for(int i=x;i>0;i--)
      if(y%i==0){
	m=i;
	break;
      }
  }
  return m;
}
int main(){
  int a,b;
  cin>>a;
  cin>>b;
  cout<<gcd(a,b);
  return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b;
  if(b>a)swap(a,b);
  while(a!=b){
    c=a-b;
    a=b;
    b=c;
    if(b>a)swap(a,b);
  }
  cout<<c<<endl;
  return 0;
}


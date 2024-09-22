#include<iostream>
using namespace std;
int main(){
  int a,b;
  int c=a+b;
  int d=0;
  while(cin>>a>>b){
    while(c!=0){
      c=c/10;
      d=d+1;
    }
    cout << d << endl;
  }
}
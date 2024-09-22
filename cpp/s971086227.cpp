#include<iostream>
using namespace std;
int main(){
  for(int i=0;i<200;i++){
    int a,b;
    cin>>a>>b;
    int num=1;
    int c=a+b;
    while(c/10!=0){
      num++;
      c/=10;
    }
    cout<<num<<endl;
  }
  return 0;
}
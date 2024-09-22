#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
int sum;
string truss;
  int a,b;
  while(cin>>a>>b) {
 sum=a+b;
 truss=to_string(sum);
 cout<<truss.size();
  }
  return 0;
}


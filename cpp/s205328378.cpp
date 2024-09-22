#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
  cin>>s;
  int i;
  for(i=0;i<3;i++){
  if(s.at(i)==1)s.at(i)=9;
  else(s.at(i)==9)s.at(i)=1;
  }
  cout << s <<endl;
 
}
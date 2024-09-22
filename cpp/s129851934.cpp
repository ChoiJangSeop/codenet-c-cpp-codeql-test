#include<bits/stdc++.h>
using namespace std;

 main() {
string s;
cin >>s;
for(int i=0;i<s.size();i++){
  if(i>0&&s.at(i)=='B'){
    s.at(i)='A';
    s.at(i-1)='A';
  }
  if(i==0&&s.at(i)=='B'){
    s.at(i)='A';
  }
}
for(int i=0;i<s.size();i++){
  if(s.at(i)!='A'){
    cout <<s.at(i);
  }
}
cout <<endl;
 }



#include <bits/stdc++.h>
using namespace std;

int main(){
  string str, str1="";
  cin >> str;
  int len=str.size();
  
  for(int i=0 ; i<len ; i++){
    if(str[i]=='0')
      str1+='0';
    else if(str[i]=='1')
      str1+='1';
    else if(str[i]=='B')
      if(str1.size()!=0)
        str1=str1.substr(0, str1.size()-1);
  }
  
  cout << str1 << endl;
}
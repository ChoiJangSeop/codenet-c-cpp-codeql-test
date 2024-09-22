#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  string T;
  cin>>S;
  T="";
  int len=S.length();
  for (int i=0;i<len;i++){
    if(S.at(i)=='0'){
      T=T+"0";
    }
    if(S.at(i)=='1'){
      T=T+"1";
    }
    if((S.at(i)=='B')&&(!(T==""))){
      T=T.substr(0,T.length()-1);
    }
  }
  cout<<T<<endl;
}

      
      
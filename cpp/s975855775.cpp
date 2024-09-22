#include <bits/stdc++.h>
using namespace std;
#define fol(i,n) for(int i=0;i<n;++i)

int main(){
  string s;cin>>s;
  fol(i,3){
    if(s[i]=='9')s[i]='1';
    else s[i]='9';
  }
  cout << s<< endl;
  return 0;
}

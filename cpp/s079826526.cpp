#include <iostream>
#include <time.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <map>


using namespace std;

int main(){
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++){
  	if(s[i]=='1') s[i]='9';
  	else s[i]='1';
  }
  cout<<s<<endl;
  return 0;
}
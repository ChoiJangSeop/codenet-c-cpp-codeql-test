#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<string>
#include<stdexcept>
#include<stdio.h>
#include<queue>
#include<math.h>
using namespace std;

 int main(){
   int n; cin >> n;
   string s = to_string(n);
  for(int i=0;i<s.size();i++){
   if(s[i]=='1') s[i]='9';
   else s[i]='1';
  }
   cout << s <<endl;
 }
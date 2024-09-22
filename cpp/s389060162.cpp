#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <climits>
#include <bits/stdc++.h>
#include <cmath>
#include <stdio.h>
#include <utility>
using namespace std;
#define ll long long

int main()
{
   string s;cin>>s;
   string temp="";
   for(int i=0;i<s.length();i++){
       if(s[i]=='0'){
           temp+='0';
       }else if(s[i]=='1'){
           temp+='1';
       }else{
           if(temp.length()!=0){
           temp.erase(temp.length()-1,1);
       }}
   }
   cout<<temp<<endl;
return 0;
}

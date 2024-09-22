#include<bits/stdc++.h>
using namespace std;
signed main()
{
   string str;
   cin>>str;
   string ans;
   for(int i=0;i<str.length();i++)
   {
      if(str[i]=='1')
        ans+='9';
      else if(str[i]=='9')
        ans+='1';
      else
        ans+=str[i];
   }
   cout<<ans;
}
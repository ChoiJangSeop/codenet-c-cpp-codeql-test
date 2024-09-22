#include<bits/stdc++.h>
using namespace std;
int main()
{
   string  s,p;
   cin>>s;
   for (int i = 0; i < s.size(); ++i)
   {
      if(s[i]=='1')
        p+='1';
      if( s[i]=='0')
        p+='0';
      if(s[i]=='B'){  
        if(p.size())
          p.pop_back();
        }
   }
   cout<<p<<endl;;
   return 0;
}

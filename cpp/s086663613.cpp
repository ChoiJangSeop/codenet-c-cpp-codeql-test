#include<bits/stdc++.h>
using namespace std;
int main()
{
 
  vector<string> s;
   int i=0;
   int l=0;
  while(cin>>s[i])
  {
    l++;
    i++;
  }
 
 
  for(i=0;i<l;i++)
  {
    if(s[i]=="0")
    {
      s.push_back('0');
      l++;
    }
    else if(s[i]=="1")
    {
      s.push_back('1');
      l++;
    }
    else if(s[i]=="B")
    {
      s.pop_back();
      l--;
    }
  }
 
    cout<<s;
 
  return 0;
}

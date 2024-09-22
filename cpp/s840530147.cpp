#include<iostrem>
using namespace std;
main()
{
  string s;cin>>s;
  if(s[0]=='9')s[0]='1';
  else s[0]='9';
  if(s[1]=='9')s[1]='1';
  else s[1]='9';
  if(s[2]=='9')s[2]='1';
  else s[2]='9';
  cout<<s<<endl;
}
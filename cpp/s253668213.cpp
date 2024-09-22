#include<iostream>
#include<string>
using namespace std;
 
int main()
{
  string s; cin >> s;
  if(s[0] == '1') s[0] = '9'; 
  else if(s[0] == '9') s[0] = '1';
  if(s[1] == '1') s[1] = '9'; 
  else if(s[1] == '9') s[1] = '1';
  if(s[2] == '1') s[2] = '9'; 
  else if(s[2] == '9') s[2] = '1';
  cout << s << endl;
}
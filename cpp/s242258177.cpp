#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
std::cin >> s;
string ans="";
int i=-1;

do {
  i++;
  if(s[i]=='0'){ans+="0";}
  else if(s[i]=='1'){ans+="1";}
  else if(s[i]=='B' && (ans.empty()!=1)){
    ans.erase(ans.length()-1);
  }
} while(i!=s.length()-1);

std::cout <<ans << '\n';

return 0;
}

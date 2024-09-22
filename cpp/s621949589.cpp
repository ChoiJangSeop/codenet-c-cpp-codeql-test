#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  string s,ans,temp;
  cin >> s;
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i]=='B'){
      if(ans.size() != 0){
        temp = ans.substr(0,ans.size()-1);
        ans = temp;
      }
    }
    else{
      ans += s[i];
    }
  }
  cout << ans << endl; 

  return 0;
}

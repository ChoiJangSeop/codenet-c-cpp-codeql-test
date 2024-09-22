#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  string s,ans;
  for(int i = 0; i < strlen(s); i++)
  {
    if(s[i]=="B"){
      if(ans != 0){
        ans = ans.substr(0,strlen(ans)-1);
      }
    }
    else{
      ans += s[i];
    }
  }
  cout << ans << endl; 

  return 0;
}

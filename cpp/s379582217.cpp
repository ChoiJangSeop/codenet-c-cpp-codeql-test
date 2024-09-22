#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(void){
  string s;
  cin >> s;
  string ans;
  int i;
  for(i=0;i<(int)(s.length());i++){
   if(s[i] == '0'){
    ans += "0"; 
   }
    if(s[i] == '1'){
     ans += "1"; 
    }
    if(s[i] == 'B'){
      if((int)(ans.length()) != 0) ans.erase(ans.end()-1);
    }
  }
  cout << ans << endl;
return 0;
} 
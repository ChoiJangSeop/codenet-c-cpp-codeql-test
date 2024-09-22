#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string s;
  cin >> s;
  string res;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '0'){
      res.push_back('0');
    }
    else if(s[i] == '1'){
      res.push_back('1');
    }
    else{
      if(res.size() > 0){
        res.pop_back();
      } 
    }
  }
  cout << res << endl;
}

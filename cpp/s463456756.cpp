#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  string output(10);
  int point;
  cin >> s;
  point = 0;
  for(int i=0;i<s.size();i++){
    if(s.at(i)=='B'){
      point = max(point-1,0);
    }else{
      output.at(point) = s.at(i);
          point++;
         }
  }
  cout << output.substr(0,point) << endl;
  return 0;
}
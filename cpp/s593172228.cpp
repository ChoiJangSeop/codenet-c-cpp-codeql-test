# include <bits/stdc++.h>
# define INF 1e9
using namespace std;

int main(){

  string s;
  cin >> s;
  string t = "";
  for(int i=0; i< s.size();i++){
    if(s[i] == '1'){
      t += '9';
    } else if(s[i] == '9'){
      t += '1';
    } else {
      t += s[i];
    }
  }

  cout << t << endl;

}
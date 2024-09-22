// https://beta.atcoder.jp/contests/abc110/submissions/3257311

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <set>
#include <string>
#include <queue>
#include <map>
#include <cmath>
#include <stack>

#define REP(i, n) for(int i = 0; i < (int)(n); i++)

using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.length();
  for(int i = 0; i < len; i++){
    if(s[i] == '1') cout << 9;
    else if(s[i] == '9') cout << 1;
    else cout << s[i];
  }
  cout << endl;
  return 0;
}

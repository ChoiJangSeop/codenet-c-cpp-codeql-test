#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)

typedef long long ll;

int main()
{
  char s[3];
  cin >> s;

  rep(i,3){
    if (s[i] == '9') s[i] = '1';
    else s[i] = '9';
  }

  cout << atoi(s) << endl;
  
  return 0;
}

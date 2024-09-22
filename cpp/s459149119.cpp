#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mod 1000000007
#define _for(it, a) \
  for (__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)

using namespace std;

int main() {
  string s;
  cin >> s;
  string res = "";
  for (int n = 0; n < s.sz; ++n) {
    if (s[n] == '0')
      res += '0';
    else if (s[n] == '1')
      res += '1';
    else {
      if (res.sz > 0) res.erase(--res.end());
    }
  }
  cout << res << endl;
  return 0;
}

// Built using Sublime-CHelper plug-in (beta)

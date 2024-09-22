#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a1, a10, a100;
  a1 = n % 10;
  a10 = n % 100 - a1;
  a100 = n % 1000 - a10 - a1;
  int ans = 0;
  if (a100 == 100)
    ans += 900;
  else
    ans += 100;
  if (a10 == 10)
    ans += 90;
  else
    ans += 10;
  if (a1 == 1)
    ans += 9;
  else
    ans += 1;
  cout << ans;
  return 0;
}
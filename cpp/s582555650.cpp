#include <bits/stdc++.h>
using namespace std;
int main() {
  int A, ans;
  cin >> A;
  ans = 0;
  if(A % 10 == 1) {
    ans += 1;
  }
  else {
    ans += 9;
  }
  if((A + 10) % 100 <= 10) {
    ans += 90;
  }
  else {
    ans += 10;
  }
  if((A + 100) % 1000 <= 100) {
    ans += 900;
  }
  else {
    ans += 100;
  }
  cout << ans << endl;
}

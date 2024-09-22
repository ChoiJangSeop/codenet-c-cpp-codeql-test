#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, a[200000], b=0, c=0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (b <= a[i]) {
      c = b;
      b = a[i];
    } else if (c <= a[i]) {
      c = a[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (b <= a[i]) {
      cout << c << endl;
    } else{
      cout << b << endl;
    }
  }
  return 0;
}

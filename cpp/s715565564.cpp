#include <bits/stdc++.h>
using namespace std;

int a[200005];
int b[200005];

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
  sort(b, b + n);
  reverse(b, b + n);
  for (int i = 0; i < n; i++)
    cout << (a[i] != b[0] ? b[0] : b[1]) << endl;
}
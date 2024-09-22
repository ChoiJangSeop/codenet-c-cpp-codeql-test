#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;


int main () {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  int max = 0, max_i, next = 0;
  for(int j = 0; j < n; j++) {
    if(a[j] > max) {
      max = a[j];
      max_i = j;
    }else if(a[j] > next){
      next = a[j];
    }
  }
  for(int i = 0; i < n; i++) {
    if(i != max_i) cout << max << endl;
    else cout << next << endl;
  }
}

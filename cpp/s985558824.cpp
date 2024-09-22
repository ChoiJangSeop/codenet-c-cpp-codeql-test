#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  rep(i, n) { cin >> nums.at(i); }

  rep(i, n) {
    int max = 0;
    rep(j, n) {
      if (i != j) {
        if (max < nums.at(j)) {
          max = nums.at(j);
        }
      }
    }
    cout << max << endl;
  }
  return 0;
}

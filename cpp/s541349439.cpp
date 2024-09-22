#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  rep(i, n) { cin >> nums.at(i); }

  int g_max = 0;
  int g_max_index = -1;
  rep(i, n) {
    int max = 0;
    if (g_max_index != i && 0 < g_max_index) {
      max = nums.at(g_max_index);
    } else {
      rep(j, n) {
        if (i != j) {
          if (max < nums.at(j)) {
            max = nums.at(j);
            if (g_max < max) {
              g_max_index = j;
              g_max = max;
            }
          }
        }
      }
    }
    cout << max << endl;
  }
  return 0;
}

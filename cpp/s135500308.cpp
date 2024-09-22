#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[]) {
  int n;
  cin >> n;

  int max_v = 100000;
  vector<int> va(n), cnt1(max_v + 1, 0), cnt2(max_v + 1, 0);
  for (int i = 0; i < n; ++i) {
    cin >> va[i];
    if (i % 2 == 0) {
      cnt1[va[i]]++;
    } else {
      cnt2[va[i]]++;
    }
  }

  array<int, 2> max2_odd{0, 0}, max2_even{0, 0};
  for (int i = 0; i < va.size(); i++) {
    auto &max2 = i % 2 == 0 ? max2_even : max2_odd;
    auto &cnt = i % 2 == 0 ? cnt1 : cnt2;
    int a = va[i];
    if (max2[0] < cnt[a]) {
      max2[1] = max2[0];
      max2[0] = a;
    } else if (max2[1] < cnt[a]) {
      max2[1] = a;
    }
  }

  int ans;
  if (max2_odd[0] != max2_even[0]) {
    ans = n - cnt1[max2_even[0]] - cnt2[max2_odd[0]];
  } else {
    ans = n - max(cnt1[max2_even[0]] + cnt2[max2_odd[1]],
                  cnt1[max2_even[1]] + cnt2[max2_odd[0]]);
  }

  cout << ans << '\n';
}
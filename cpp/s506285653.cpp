# include <iostream>
# include <algorithm>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
  auto sorted_a = a; sort(sorted_a, sorted_a + n);
  
  for (int a_i = 0; a_i < n; ++a_i) {
    int ans = sorted_a[n - 1];
    if (ans == a[a_i]) ans = sorted_a[n - 2];
    cout << ans << endl;
  }
  
  return 0;
}
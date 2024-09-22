#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(n, i) for(int i = 0; i < n; ++i)

void solve(void) {
  ll n; cin >> n;
  vector<ll> a(n);
  rep(n, i) cin >> a[i];

  vector<ll> ruiseki_max(n+1, -1);
  vector<ll> ruiseki_max_inv(n+1, -1);
  for(ll i = 1; i <= n; ++i) ruiseki_max[i+1] = max(ruiseki_max[i-1], a[i]);
  for(ll j = n-1; j >= 0; --j) ruiseki_max_inv[j] = max(ruiseki_max_inv[j+1], a[j]);

  rep(n, i) {
    cout << max(ruiseki_max[i], ruiseki_max_inv[i+1]) << endl;
  }
}

int main(void) {
  solve();
  return 0;
}
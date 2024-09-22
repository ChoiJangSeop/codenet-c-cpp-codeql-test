#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  ll N; cin >> N;
  vector<ll> A(N), s(N);
  rep(i,N){
    cin >> A[i];
    s[i] = A[i];
  }
  sort(s.begin(), s.end(), greater<ll>());
  rep(i,N) {
    if(s[0] == A[i])
      cout << s[1] << endl;
    else
      cout << s[0] << endl;
  }
  return 0;
}
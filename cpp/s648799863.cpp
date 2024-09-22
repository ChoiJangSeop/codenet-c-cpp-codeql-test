#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, m, n) for (int i = m; i < n; ++i)
#define rem(i, m, n) for (int i = m; i > n; --i)
const int MOD = 1000000007;

int main() {
    int N; cin >> N;
    vector<int> A(N), B(N);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) B[i] = A[i];
    sort(B.begin(), B.end(), greater<int>());
    rep(i, 0, N) {
        if(A[i] == B[0]) cout << B[1] << '\n';
        else cout << B[0] << '\n';
    }
    return 0;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); ++i)
#define repr(i, a, b) for (int i=a; i<(b); ++i)
#define reprev(i, n) for (int i=n-1; i>=0; --i)
#define reprrev(i, a, b) for (int i=b-1; i>=(a); --i)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
    cout << fixed << setprecision(10);
    
    int N; cin >> N;
    vector<int> A(N), Ac(N);
    rep(i, N) {
        cin >> A[i];
        Ac[i] = A[i];
    }
    sort(A.rbegin(), A.rend());
    rep(i, N) {
        // cout << A[i] << " " << Ac[i] << endl;
        if (A[0] == Ac[i]) {
            cout << A[1] << endl;
        } else {
            cout << A[0] << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
 
const int MAXN = 2e5+5;
const int MOD = 1e9+7;
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second 
#define debug(x)  do{cerr<<#x<<": "<<x<<"\n";}while(0)
#define debugv(x) do{cerr<<#x<<": ";for(auto&e: (x))cerr<<e<<" ";cerr<<"\n";}while(0)
#define FAIL0 {cout << "0\n"; return 0;}
#define FAIL1 {cout << "-1\n"; return 0;}
#define FAILNO {cout << "No\n"; return 0;}
#define YES {cout << "Yes\n"; return 0;}
 
int N;
pair<int,int> A[MAXN];
int ans[MAXN];

int main() {
#ifdef OJ
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i].fi;
        A[i].se = i;
    }

    sort(A, A+N);
    for (int i = 0; i < N-1; i++) ans[A[i].se] = A[N-1].fi;
    ans[A[N-1].se] = A[N-2].fi;

    for (int i = 0; i < N; i++) cout << ans[i] << '\n';
    return 0;
}

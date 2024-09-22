#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define forn(i, n) for(ll i = 0; i < (n); i++)
#define fori(i, b, e) for(ll i = (b); i < (e); i++)
#define forr(i, b, e) for(ll i = (b); i >= (e); i--)
#define allele(v) v.begin(), v.end()
#define fi first
#define se second
#define Mat vector<vector<ll>>
#define Arr vector<ll>
#define Matd vector<vector<ld>>
#define Arrd vector<ld>

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    Arr a(n);
    forn(i, n) cin >> a[i];
    ll mx = *max_element(allele(a));
    ll cnt = count_if(allele(a), [mx](ll x)->bool{
        return (x == mx);
    });
    Arr b(a);
    sort(allele(b), greater<ll>());
    ll scd = b[1];
    forn(i, n) cout << (cnt == 1 && a[i] == mx ? scd : mx) << endl;
    return 0;
}
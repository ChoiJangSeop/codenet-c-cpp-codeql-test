#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

//find_by_order gives kth-largest element
//order_of_key gives the number of items in the set that are strictly smaller!!

// OT.find_by_order(k-1)
// 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define db(x) cerr << #x << "=" << x << endl
#define db2(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl
#define db3(x, y, z) cerr << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << endl
#define db4(x, y, z, w) cerr << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << "," << #w << "=" << w << endl
#define ll long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define mp make_pair
#define X first
#define Y second
#define sz(x) (int)((x).size())
#define pii pair<int,int>
#define MOD (ll)(1e9 + 7)
#define rep(i, n)    for(int i = 0; i < (n); ++i)
#define repA(i, a, n)  for(int i = a; i <= (n); ++i)
#define repD(i, a, n)  for(int i = a; i >= (n); --i)
#define trav(a, x) for(auto& a : x)
typedef vector<int> vi;
#define inf (ll)(1e18)
#define double long double
#define int long long

//////////////////////

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
	
    int n;
    cin >> n;
    vector<int> vec(n), left(n), right(n);
    rep(i,n)
    	cin >> vec[i];

    left[0] = vec[0];
    repA(i,1,n-1)
    	left[i] = max(vec[i], left[i - 1]);

    right[n - 1] = vec[n - 1];
    repD(i,n-2,0)
    	right[i] = max(vec[i], right[i + 1]);

    cout << right[1] << '\n';
    repA(i,1,n-2)
    	cout << max(left[i - 1], right[i + 1]) << '\n';
    cout << left[n - 2] << '\n';
}
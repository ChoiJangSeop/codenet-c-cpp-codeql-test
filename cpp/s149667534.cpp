#include <bits/stdc++.h>
#define ll long long int
#define ld double
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define MOD 1000000007
#define fo(i,a,b) for(i=a;i<b;i++)
#define foe(i,a,b) for(i=a;i<=b;i++)
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;
int main()
{
	boost;
	int n, i;
	cin >> n;
	int arr[n];
	fo(i, 0, n)
	cin >> arr[i];
	int pref[n], suf[n];
	pref[0] = 0;
	fo(i, 1, n){
		pref[i] = max(pref[i - 1], arr[i]);
	}
	suf[n - 1] = arr[n - 1];
	for(i = n - 2; i >= 0; i--){
		suf[i] = max(suf[i + 1], arr[i]);
	}
	int ans[n];
	fo(i, 0, n){
		ans[i] = max((i > 0 ? pref[i - 1] : 0), (i < n - 1 ? suf[i + 1] : 0));
	}
	for(int x : ans)
	cout << x << ' ';
}
#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define DEBUG true
#ifdef ONLINE_JUDGE
#undef DEBUG
#define DEBUG false
#endif 

using namespace std;

#define MAXN ((int)2e5+5)
#define MOD (100000009)
#define INF (100000009)
#define ll long long
#define _ << " " <<
#define CLEAR(a, b) memset(a, b, sizeof(a))
#define TRACE(x) if(DEBUG) cerr << #x << " = " << x << endl;
#define TRACE2(x,y) if(DEBUG) cerr << #x << " = " << x << " | " << #y << " = " << y << endl;
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl "\n"
#define pii pair<int,int>
#define mid ((l+r)/2)

int n;
int a[MAXN];
int sc,maxx;

map <int,int> mp;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];

		mp[a[i]]++;

		if(a[i] > maxx)
		{
			sc = max(sc,maxx);
			maxx = a[i];
		}
		else if(a[i] > sc)
			sc = a[i];
	}
	if(mp[maxx] > 1)
	{
		for (int i = 0; i < n; ++i)
			cout << maxx << endl;
		return 0;
	}


	for (int i = 0; i < n; ++i)
	{
		if(a[i] == maxx)
			cout << sc << endl;
		else
			cout << maxx << endl;
	}
}
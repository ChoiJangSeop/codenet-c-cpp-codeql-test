#include<bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
#define mod 1e9
int a[100005],b[100005];
int32_t main() {
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{	cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(a[n-1]==b[i])
			cout<<a[n-2]<<"\n";
		else cout<<a[n-1]<<"\n";
	}
}
						
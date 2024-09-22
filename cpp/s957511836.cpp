#include <bits/stdc++.h>
using namespace std;

long long n,i,a[300000],b[300000];

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++)
		if(b[i]!=a[n]) cout<<a[n]<<endl;
		else cout<<a[n-1]<<endl; 
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxn;
	for(int i=0;i<n;i++)
	{
		maxn=0;
		for(int j=0;j<n;j++)
		{
			if(j==i)
			{
				continue;
			}
			if(a[j]>maxn)
			{
				maxn=a[j];
			}
		}
		cout<<maxn<<endl;
	}
	return 0;
}


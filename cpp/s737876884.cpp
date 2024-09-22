#include <bits/stdc++.h>
using namespace std;
const int N=200001;
int n,d[N],maxn1=-1,maxid1=-1,maxn2=-1,maxid2=-1;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&d[i]);
		if(d[i]>maxn1)
		{
			maxn2=maxn1;
			maxid2=maxid1;
			maxn1=d[i];
			maxid1=i;
		}
		if(d[i]<maxn1 && d[i]>maxn2)
		{
			maxn2=d[i];
			maxid2=i;
		}
		if(d[i]==maxn1 && i!=maxid1)
		{
			maxn2=d[i];
			maxid2=i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(i!=maxid1)
			printf("%d\n",maxn1);
		else
			printf("%d\n",maxn2);
	}
	return 0;
}
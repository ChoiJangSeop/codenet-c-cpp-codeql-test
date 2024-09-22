#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,x,y,z,a[200005];
	while(~scanf("%d",&n))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a+1,a+n);
		for(i=0;i<n;i++)
		{
			if(n==1)printf("%d\n",a[0]);
			else if(n==2)printf("%d\n",a[1]);
			else {if(i==n-1)printf("%d\n",a[n-2]);
			      else printf("%d\n",a[n-1]);
			}
		}
	}
}
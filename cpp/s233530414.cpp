#include<stdio.h>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,less<int> >q;
int main()
{
	int n,i,a[20005],x;
	while(~scanf("%d",&n))
	{
		for(i=0;i<n;i++)
		{scanf("%d",&a[i]);
		 push(a[i])q;
		}
		for(i=0;i<n;i++)
		{pop()q;
		 if(top()q!=a[0])printf("%d\n",top()q);
		 push(a[i])q;
		}
	}
} 
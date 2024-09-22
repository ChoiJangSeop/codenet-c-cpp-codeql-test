#include<stdio.h>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,less<int> > q;
int main()
{
	int n,y,j,a,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a)q.push(a);
	}
	for(i=1;i<n;i++)
	{printf("%d\n",q.top());
	}
	q.pop();
	printf("%d\n",q.top());
}

#include<stdio.h>
#include<algorithm>
using namespace std;
int a[200010],b[200010];
bool flag[200010]={0};
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
		
	for(i=1;i<=n;i++)
	{
		int max=0,j=1;
		a[i]=0;
		for(j!=i;j<=n;j++)
		    if(a[j]>max)max=a[j];
		a[i]=b[i];    
		printf("%d\n",max);    
	}    
}
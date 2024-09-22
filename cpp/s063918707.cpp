#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(i%3==0||i%10==3) printf(" %d",i);
	}
	printf("\n");
	return 0;
}
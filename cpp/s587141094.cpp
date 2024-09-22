#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int n , N = 103;
	int a[N] = {0};
	scanf("%d" , &n);
	int i;
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d" , &a[i]);
	}
	for(i = n - 1; i >= 0 ; i--)
	{
		if(i)
		{
			printf("%d " , a[i]);
		}
		else
		{
			printf("%d\n" , a[i]);
		}
	}
	return 0;
}

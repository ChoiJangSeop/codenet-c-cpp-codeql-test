#include<stdio.h>
const int N = 105;
int main()
{
	int n, a[N] = {0};
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = n - 1; i >= 0; i--)
	{
		if(i)
		{
			printf("%d ", a[i]);
		}
		else
		{
		    printf("%d\n", a[i]);
		}
	}
	return 0;
 } 

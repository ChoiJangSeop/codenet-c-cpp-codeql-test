#include<stdio.h>


int main()
{
	int a, b, sum = 0, counts = 0;
	
	while(scanf("%d %d", &a, &b) != EOF)
	{
		sum = a + b;
		counts = 0;
		while(sum != 0)
		{
			sum /= 10;
			counts++; 
		}
		printf("%d\n", counts);
	}
	

	
	
}

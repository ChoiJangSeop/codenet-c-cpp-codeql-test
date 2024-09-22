#include <stdio.h>

int main(void)
{
	int a, b;
	int add;
	int count;

	while (scanf("%d %d", &a, &b) != EOF){

		add = a + b;
	
		count = 0;
	
		while (add){
			add /= 10;

			count++;
		}

	printf("%d\n", count);
	}

	return (0);
}
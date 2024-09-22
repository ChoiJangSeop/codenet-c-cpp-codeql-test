#include<stdio.h>

int main(void)
{

	int x, y, d;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	d = x % y;

	while (d != 0) {

		x = y;
		y = d;
		d = x % y;
	}
	printf("%d", y);
	

	return 0;
}

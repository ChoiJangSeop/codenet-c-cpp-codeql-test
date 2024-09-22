#include <stdio.h>

int main (void)
{
	double r,syu,men,PI;

	PI = 3.141592653589;

	scanf("%lf",&r);

	men = r * r * PI;
	syu = 2 * r * PI;

	printf("%f %f\n",syu,men);

	return 0;
}
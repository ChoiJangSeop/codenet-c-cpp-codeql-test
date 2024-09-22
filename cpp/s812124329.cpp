#include <stdio.h>
#include <math.h>
#define PI 3.141593
int main(void)
{
	double r,are,circ;

	scanf("%lf",&r);
	are = 2*r*PI;
	circ = r*r*PI;

	printf("%f %f\n", are, circ);


	return 0;
}

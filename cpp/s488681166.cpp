#include <stdio.h>
#include <math.h>

int main()
{
	double r;
	double circum, area;
	
	scanf("%lf", &r);
	
	circum = 2 * M_PI * r;
	area   = M_PI * r * r;
	
	printf("%.6f %.6f\n", area, circum);
	
	return 0;
}

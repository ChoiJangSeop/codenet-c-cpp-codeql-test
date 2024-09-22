#include<stdio.h>
int main() {
	int a;
	double b, c;
	scanf("%lf", &a);
	b = (double)a*a * 3.141592653589;
	c = (double)2*a*3.141592653589;
	printf("%f %f\n", b, c);
	return 0;
}
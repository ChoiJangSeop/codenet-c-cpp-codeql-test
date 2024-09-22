#include<math.h>
#include<stdio.h>
#include<utility>
#include<algorithm>

int main() {
	int r;
	double S, l;
	scanf_s("%d", &r);/////////////////////
	S = 3.1415926535*r*r;
	l = 3.1415926535 * 2 * r;
	
	printf("%6lf %6lf\n", S, l);
	return 0;
}
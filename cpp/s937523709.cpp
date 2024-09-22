#include<stdio.h>
int main(void)
{
	double p,me,syu,r1;
	int r;
	scanf("%d",&r);
	p=3.14159265358979;
	r1=r;
	
	me=r1*r1*p;
	syu=2*r1*p;
	printf("%1f %1f",me,syu);
	return 0;
}
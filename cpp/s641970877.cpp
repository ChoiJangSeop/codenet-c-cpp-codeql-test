#include<stdio.h>
#include<math.h>
double pi=acos(-1);
int main()
{
    double r;
    scanf("%lf",&r);

    double A,C;

    A=pi*(r*r);
    C=2*pi*r;
    printf("%.6lf %.6lf\n",A,C);
    return 0;
}


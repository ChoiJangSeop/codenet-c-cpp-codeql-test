#include <stdio.h>
int main()
{
    long long int x, y, X, Y;
    scanf("%lld %lld %lld %lld", &x, &y, &X, &Y);
    long double z, b;
    z=x*y/2;
    b=y/x;
    if(X==x/2&&Y==y/2)
        printf("%lf 1\n",z);
    else 
		if((X==x/2&&Y/X==y/x)||(Y=y/2&&Y/X==y/x))
        printf("%lf 1\n", z);
    else 
        printf("%lf 0\n", z);
    return 0;
}

#include<cstdio>
int main(void)
{
    long long w,h,x,y;
    scanf("%lld %lld %lld %lld" ,&w,&h,&x,&y);
    printf("%.9f %lld" ,w*h/2.0,(w==2*x && h==2*y));
    return 0;
}

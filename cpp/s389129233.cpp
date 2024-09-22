#include<cstdio>
using namespace std;
int main()
{
    long long w,h,x,y;
    scanf("%lld %lld %lld %lld",&w,&h,&x,&y);
    long long zx=w/2,zy=h/2;
    double ans=h*w*1.0/2;
    printf("%lf ",ans);
    if(x==zx&&y==zy)
        printf("1\n");
    else
        printf("0\n");

    return 0;

}

#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int n;
    int k=1;
    int a=x/2;b=y/2
    for(n=1; (n<=a) && (n<=b) ;n++)
        {
            if((x%n==0) && (y%n==0)) k=n;
        }
    printf("%d\n",k);
    return 0;

}
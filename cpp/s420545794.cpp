#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int n;
    int k;
    int z,Z;
    if(x=y) printf("%d",x);
    else
{
    if(x<y) {z=x;Z=y;}
    else {z=y;Z=x;}
    int sz=Z/2+1;
    if(z<=sz)
    {
        for(n=z; n>=1 ;n--)
        {
            if(z%n==0)
                {if(Z%n==0) {k=n;break;}}
        }
     }
     else
     {
      for(n=sz; n>=1 ;n--)
            {
                if(z%n==0)
                    {if(Z%n==0) {k=n;break;}}
            }
     }
    
    printf("%d\n",k);
}
    return 0;

}
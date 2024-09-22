#include <iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;
int s[200005];
int main()
{
    int a,b;
    int n;

    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&s[i]);
    int m=s[0];
    int j=0;
    for(i=0; i<n; i++)
    {
        if(m<s[i])
        {
            m=s[i];
            j=i;
        }
    }
    int k=0;
    for(i=0; i<n; i++)
    {
        if(s[i]==m)
            k++;
    }
    int ma;
    if(j!=0)
        ma=s[j-1];
    else
        ma=s[j+1];
    if(k==1)
    {
        for(i=0; i<n; i++)
        {
            if(ma<s[i]&&s[i]<m)
            {
                ma=s[i];

            }

        }
        for(i=0; i<n; i++)
        {
            if(i!=j)
                printf("%d\n",m);
            else
                printf("%d\n",ma);
            }
    }
    else
        for(i=0; i<n; i++)
        {
            printf("%d\n",m);
        }
    return 0;
}

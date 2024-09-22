#include<bits/stdc++.h>
#define   ll      long long int
#define   sz      200010
using namespace std;



int main()
{


    double w,h,x,y,a,b;


    cin>>w>>h>>x>>y;
    a=w*y;
    b=x*h;

    if(a==b)
    {
        printf("%0.10lf 1\n",a);
    }
    else
    {
        a=min(a,b);
        printf("%0.10lf 0\n",a);

    }



    return 0;
}

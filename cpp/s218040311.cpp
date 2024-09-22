#include <bits/stdc++.h>
/// TONI BO$$ was here
/// #MLC

using namespace std;

int main()
{
    double x,y,a,b;
    scanf("%lf%lf%lf%lf",&a,&b,&x,&y);
    int rez=0;
    if(x==a/2.0 && y==b/2.0)
        rez=1;
    printf("%lf %d",a*b/2.0,rez);

    return 0;
}

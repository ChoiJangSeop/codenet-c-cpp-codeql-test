#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w,h,x,y;
    double m;
    cin>>w>>h>>x>>y;
    m=(w*h)/2;
    printf("%.9f ",m);
    if(x*2==w&&y*2==h)
        cout<<'1'<<endl;
    else
        cout<<'0'<<endl;
    return 0;
}

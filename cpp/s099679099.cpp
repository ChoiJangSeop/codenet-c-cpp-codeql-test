#include<iomanip>
#include<iostream>
using namespace std;
double a,b,c,d;
double ar1,ar2,ar3,ar4;
int main()
{
    cin>>a>>b>>c>>d;
    ar1=c*b;
    ar2=(a-c)*b;
    ar3=d*a;
    ar4=(b-d)*a;
    double maxi=ar1;
    int ok=0;
    if(ar2>ar1)
    {
        maxi=ar2;
    }
    if(ar3>maxi)
        maxi=ar3;
    if(ar4>maxi)
        maxi=ar4;
    if(ar1==maxi)
        ok++;
    if(ar2==maxi)
        ok++;
    if(ar3==maxi)
        ok++;
    if(ar4==maxi)
        ok++;
    if(ok>1)
        cout<<std::setprecision(9)<<maxi/2<<' '<<1;
    else
        cout<<std::setprecision(9)<<maxi/2<<' '<<0;
    return 0;
}

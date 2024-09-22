#include <iostream>
#include <cmath>
using namespace std;

int maxi(int t[],int n,int pos)
{
    int  m;
    if(pos==0) m=t[1];
    else m=t[0];
    for(int i=0;i<n;i++)
    {
        if((i!=pos)&&(t[i]>m))
        m=t[i];
    }
    return m;
}
int main ()
{
    int n,im;
    cin>>n;
    int a[n];
    cin>>a[0];
    im=0;
    for(int i=1;i<n;i++)
    {
           cin>>a[i];
           if(a[i]>a[im])
            im=i;
    }

    for(int i=0;i<n;i++)
    {
        if(i!=im)
            cout<<a[im]<<endl;
        else
        cout<<maxi(a,n,i)<<endl;
    }
    return 0;
}
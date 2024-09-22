#include<iostream>
#include<cmath>
using namespace std;
int tt=0x7fffffff;
int main()
{
	int n;
    int a[1001];
    int sum;
    int sum1;
    cin>>n;
    int min=tt,max=-tt;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
    int t=sum/n;
    for(int k=min;k<=max;k++)
    {
        sum1=0;
        for(int i=1;i<=n;i++)
        {
            sum1+=(a[i]-k)*(a[i]-k);
        }
        if(sum1<tt) tt=sum1;
    }
    cout<<tt;
    return 0;
}
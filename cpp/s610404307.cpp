#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    long double w,h,x,y,i,j,k;
    long double a,b,c;
    cin>>w>>h>>x>>y;
    i=w*(fmin(y,(h-y)));
    j=h*(fmin(x,(w-x)));
	cout<<setprecision(17)<<w*h/2.0<<" ";
	if (x==w/2.0 && y==h/2.0)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
}
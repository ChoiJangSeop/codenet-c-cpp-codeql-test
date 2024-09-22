#include<bits/stdc++.h>
using namespace std;
int main()
{
	double h,w,x,y;
	cin>>h>>w;
	cin>>x>>y;
	double maxn=1.0*(h*w)/2;
	printf("%.10f ",maxn);
	if(x==w/2 && y==h/2)
	  cout<<1;
	else
	  cout<<0;
	return 0;
}

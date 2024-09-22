#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b;
	if(a%10==1)
	{
		b=9;
	}
	else
	{
		b=1;
	}
	if((a%100-a%10)/10==1)
	{
		b=90+b;
	}
	else
	{
		b=10+b;
	}
	if((a-a&100)/100==1)
	{
		b=900+b;
	}
	else
	{
		b=100+b;
	}
	cout<<b;
	return 0;
}
#include<iostream>
using namespace std;
void ucln(int a,int b)
{
	int limit, t=0;
	if(a>b)
		limit=a;
	else if(b>a)
		limit=b;
	else if(a==b)
		limit=a;
	for(int i=1;i<limit;i++)
	{
		if(a%i==0 && b%i==0)
		{
			if(t<i)
				t=i;
		}
	}
	cout<<t;
}
int main()
{
	long a,b;
	cin>>a>>b;
	ucln(a,b);
	return 0;
}
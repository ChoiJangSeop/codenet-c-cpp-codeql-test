#include<iostream>
using namespace std;
int main(void)
{
	int n;
	int a[1000],i;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	
		cin>>a[i];

	}

	for(i=n-1;i>=0;i--)
	{
		cout<<a[i];
	
		cout<<" ";
	}
	

	cout<<endl;
return 0;
}


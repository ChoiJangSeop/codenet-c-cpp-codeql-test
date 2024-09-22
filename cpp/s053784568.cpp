#include<iostream>
using namespace std;

int counter(int x)
{
	int count=0;
	while(x)
	{
		x/=10;
		count++;
	}
	return count;
}


int main()
{
	int a,b,x;
	while(cin>>a>>b)
	{
		x=a+b;
		cout<<counter(x)<<endl;
	}
	return 0;
}
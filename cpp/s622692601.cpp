#include<iostream>
using namespace std;
int main()
{
	int a[100], b;
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> a[i];
	}

	for (int i = b-1 ; i >= 0 ;i--)
	{
		cout << a[i] << " " ;
	}

}
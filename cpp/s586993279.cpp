#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int a, b;
	while (cin>>a>>b)
	{
		char s[7];
		sprintf(s, "%d", a + b);
		cout << strlen(s) << endl;
	}


	return 0;
}
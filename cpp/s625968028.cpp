#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	double r;
	double a,b;

	cin >> r;

	a = 3.14*r*r;
	b = 2*r*3.14;

	printf("%.06f %.06f",a,b);

	return 0;
}
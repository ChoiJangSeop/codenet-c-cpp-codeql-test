#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <functional>
using namespace std;

int main()
{
	int n;
	int a[100];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i];
		if (i != 0)
		{
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}
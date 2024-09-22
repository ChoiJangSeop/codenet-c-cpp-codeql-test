#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{		
	int r;
	cin >> r;
	
	double area = r * r * pi;
	double leng = r * 2 * pi;
	
	cout << area << " " << leng << endl;
	
	return 0;
}
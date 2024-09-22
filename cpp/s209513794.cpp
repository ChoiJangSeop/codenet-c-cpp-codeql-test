#define _USE_MATH_DEFINES
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	long float r;
	cin >> r;
	printf("%.6lf", (double)r*(double)r*M_PI);
	cout << " ";
	printf("%.6lf", (double)r * 2 *M_PI);

	return 0;
}
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	double r;
	double pai = 3.141592653589;

	cin >> r;

	printf("%.6lf %.6lf\n", (double)r*r*pai,(double)2.0*r*pai);

	return 0;
}
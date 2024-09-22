#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int r;
	double pai = 3.14159265358979;

	cin >> r;

	printf("%.6lf %.6lf\n", (double)r*r*pai,(double)2*r*pai);

	return 0;
}
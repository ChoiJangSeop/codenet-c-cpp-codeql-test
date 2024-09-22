#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	float r,r1,r2;
	scanf("%f",&r);
	r1=2*r*3.14159265;
	r2=r*r*3.14159265;
	printf("%.6f %.6f\n",r1,r2);
	return 0;
}
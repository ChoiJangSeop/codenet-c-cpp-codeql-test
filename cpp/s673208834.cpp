#include <iostream>
//#include <iomanip> 
#include <math.h>
//using namespace std;

#ifndef M_PI
#define M_PI (atan(1.0)*4)
//#define 3.141592654
#endif

int main() {
	double r;
	double s,A;
	std::cin>> r;
	s=2*M_PI*r;
	A=M_PI*r*r;
	printf("%f %f\n",s,A);
	return 0;
}
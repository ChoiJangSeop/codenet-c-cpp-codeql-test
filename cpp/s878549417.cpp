#include<iostream>
#include<iomanip>
#define PI 3.1415926535
using namespace std;

int main()
{
	double r;	
	cin>>r;	
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<PI*r*r<<" "<<2*PI*r<<endl;
	return 0;
}

#include<iostream>
#include <iomanip>
#define PI 3.1415926535


using namespace std;


int main()
{
	int r;
	cin >> r;
	cout <<fixed <<setprecision(6)<< r * r * PI <<" "<< r * 2 * PI<<endl;

	return 0;
}
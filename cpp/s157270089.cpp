#include<iostream>
#include<iomanip>
int main()
{
	int a = 0;
	double p = 3.1415926;
	std::cin >> a;
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(6) << (double)p*a*a <<  " " << std::setiosflags(std::ios::fixed) << std::setprecision(6) << (double)a*2*p << std::endl;
	return 0;
}

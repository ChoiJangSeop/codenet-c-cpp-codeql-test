#include <iostream>
#include <string>

int main()
{
	double r, m, l;
	std::cin >> r;
	r *= 1.000000000;
	m = r * r * 3.141592653589;
	l = r * 2 * 3.141592653589;
	std::cout << std::fixed << m << " " << std::fixed << l << std::endl;
}
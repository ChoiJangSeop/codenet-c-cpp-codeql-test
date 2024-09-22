#include <iostream>

int gcd(int x, int y)
{
	if (x==0) return y;
	if (y==0) return x;
	if (x>y)  return gcd(y, x%y);
	if (x<=y) return gcd(x, y%x);
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << gcd(a,b) << std::endl;
	
	return 0;
}



#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	if (y == 0)
		return x;
	if (x > y)
		gcd(y, x%y);
}
int main()
{
	int x, y;
	cin >> x >> y;
	return gcd(x, y);
}
#include <iostream>
using namespace std;

long gcd(long x, long y)
{
	if(y > 1)	return gcd(y, x % y);
	if(y == 0)	return x;
	if(y == 1)	return 1;
}

int main(void)
{
	long a, b, ans;

	cin >> a >> b;

	ans = (a >= b ? gcd(a, b) : gcd(b, a));

	cout << ans << endl;

	return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int small,gcd;
	gcd = 1;
	small = (a > b) ? b : a;
	//cout << "small : " << small << endl;

	for (int i = 2; i <= small; i++) {
		while (a%i == 0 && b%i == 0) {
			a = a / i;
			b = b / i;
			gcd = gcd * i;
		}
	}

	cout << gcd << endl;

	return 0;
}

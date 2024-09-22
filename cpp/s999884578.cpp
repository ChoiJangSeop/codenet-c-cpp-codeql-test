#include <iostream>
using namespace std;

int main()
{
	int a, b;

	while (cin >> a >> b) {
		int s = a + b, t = 0;

		while (s > 0) {
			s /= 10;
			t++;
		}

		cout << t << endl;
	}

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int a, b, n = 0, wa;
	int countdata[1000];
	while (cin >> a >> b) {
		int count = 0;
		wa = a + b;
		while (wa > 0) {
			wa = wa / 10;
			count++;
		}
		countdata[n] = count;
		n++;
	}
	for (int a = 0; a < n; a++) {
		cout << countdata[a] << endl;
	}
}
#include <iostream>
using namespace std;

int main() {
	//input
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//calculation
	int max1 = a[0];
	for (int i = 0; i < n; i++) {
		if (max1 < a[i]) {
			max1 = a[i];
		}
	}

	int memo = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == max1) {
			memo = i;
		}
	}

	int max2 = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] != a[memo] && max2 < a[i]) {
			max2 = a[i];
		}
	}

	//output
	for (int i = 0; i < n; i++) {
		if (a[i] != a[memo]) {
			cout << max1 << endl;
		}
		else {
			cout << max2 << endl;
		}
	}
	return 0;
}
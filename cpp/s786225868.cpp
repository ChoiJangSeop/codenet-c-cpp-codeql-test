#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	int ind1;
	int n1,n2;
	n1 = n2 = 0;
	for (int i = 0; i < N; ++i) {
		int temp;
		cin >> temp;
		if (temp > n1) {
			n1 = temp;
			ind1 = i;
		}
		else if (temp > n2) {
			n2 = temp;
		}
	}
	for (int i = 0; i < N; ++i) {
		if (i == ind1) {
			cout << n2 << endl;
		}
		else {
			cout << n1 << endl;
		}
	}
	return 0;
}

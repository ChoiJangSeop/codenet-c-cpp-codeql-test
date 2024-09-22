#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main() {
	string A;
	cin >> A;

	for (int i = 0;i < A.size();i++) {
		if (A[i] == '1') {
			A[i] == '9';
		}
		else if (A[i] == '9') {
			A[i] == '1';
		}
	}
	cout << A << endl;
	return 0;
}
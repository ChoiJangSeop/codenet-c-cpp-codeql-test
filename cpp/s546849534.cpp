#include<iostream>
using namespace std;
unsigned int x, y;
int main() {
	int max;
	cin >> x >> y;
	if (x <= y) {
		for (int i = x; i > 0; i--) {
			if (x%i == 0 && y%i == 0) {
				cout << i << endl;
				goto end;
			}
		}
	}
	else {
		for (int i = y; i > 0; i--) {
			if (x%i == 0 && y%i == 0) {
				cout << i << endl;
				goto end;
			}
		}
	}
end:;
}
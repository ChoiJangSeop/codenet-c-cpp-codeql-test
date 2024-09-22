#include <iostream>

using namespace std;

int counts(char[] num) {
	int count = 0;
	for (int i = 0; i < num.length; i++) {
		if (num[i] != "0") count++;
	}
	return count;
}

int main() {
	for (int a, b; cin >> a >> b && a && b) {
	  char[] as = (char[])a;
	  char[] bs = (char[])b;
		cout << counts(as)+counts(bs) << endl;
	}
}
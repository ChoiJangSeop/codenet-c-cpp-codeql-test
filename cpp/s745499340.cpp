#include<iostream>
using namespace std;

int main() {

	int a, b, c,d;
	char e[100];

		cin >> a >> b;

		c=a+b;

		d = sprintf(e,"%d", c);

	cout << d << endl;

	return 0;
}
#include<iostream>
using namespace std;

int getDigital(int sum) {
	int a=1;
	while ( sum / 10 ) {
		a++;
		sum /= 10;
	}
	return a;
}

int main() {
	int a,b,c;
	while(cin >> a >> b) {
		c = getDigital(a + b);
		cout << c << endl;
	} 
} 
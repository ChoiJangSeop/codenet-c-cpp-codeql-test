#include <iostream>
using namespace std;

int main() {
	int a, b, i;
	double sum;
	while(cin >> a >> b){
		sum = a + b;
		for(i = 1; sum >= 10; i++){
			sum /= 10;
		}
		cout << i << endl;
	}
	return 0;
}
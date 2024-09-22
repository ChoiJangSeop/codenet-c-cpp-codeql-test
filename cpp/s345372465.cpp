#include <iostream>

using namespace std;

int main(){

	int a, b, gcd=1;
	int i;
	
	cin >> a >> b;

	for (i = 1; i < a || i < b; i++){
		if (a % i == 0 && b % i == 0){
			gcd = i;
		}
	}

	cout << gcd << endl;
	return 0;
}
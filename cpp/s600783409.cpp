#include <iostream>
using namespace std;

int gcd(int n, int m){
	if(m == 0){
		return n;
	}
	if(n < m){
		return gcd(m, n);
	}
	return gcd(m, n%m);
}

int main(){
	int i , j;
	cin >> i >> j;
	cout << gcd(i, j) << endl;
}

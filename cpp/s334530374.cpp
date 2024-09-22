#include<bits/stdc++.h>
using namespace std;

unsigned long long GCD(unsigned long long a, unsigned long long b) {
	if (a < b) return GCD(b, a);
	if (b == 0) return a;
	return GCD(b, a % b);
}

int main(){
	int a, b; cin >> a >> b;
	cout << GCD(a, b) << endl;
	return 0;
}


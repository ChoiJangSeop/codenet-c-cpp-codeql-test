#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
	while(cin >> a >> b) {
		cout << (int)(log10(a + b)) + 1 << endl;
	}
}
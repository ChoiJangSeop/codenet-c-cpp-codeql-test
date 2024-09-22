#include <iostream>
#include <valarray>
#include <cstdio>
using namespace std;

int main() {
	int n;
	cin >> n;
	valarray<int> a(n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	auto b = a;
	int max1 = b.max();
	for (int i = 0; i < n; ++i) {
		if (b[i] == max1) {
			b[i] = -1;
			cout << b.max() << "\n";
			b[i] = a[i];
		}
		else {
			cout << max1 << "\n";
		}
	}
}
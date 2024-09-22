#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_A

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
		cout << " " << arr[i];
	
	cout << endl;
	return 0;
}
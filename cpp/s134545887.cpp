#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>A(N),B(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		B[i] = A[i];
	}
	sort(B.rbegin(), B.rend());

	for (int i = 0; i < N; i++)
	{
		if (A[i] == B[0]) {
			cout << B[1] << endl;
		}
		else {
			cout << B[0] << endl;
		}
	}
	return 0;
}
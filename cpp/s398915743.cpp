#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <functional>
#include <complex>
#include <ccomplex>
using namespace std;

int max(int a[], int n) {
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}

int main() {
	int N, i, j;
	cin >> N;
	int X[N];
	int Y[N];
	for (i = 0; i<N; i++) {
		cin >> X[i];
	}
	for (i = 0; i<N; i++) {
		j = X[i];
		X[i] = 0;
		Y[i] = max(X, N);
		X[i] = j;
		cout << Y[i] << endl;
	}
}
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
void XoaPhanTu(int a[], int &n, int pos) {
	// Mang rong, khong the xoa.
	if (n <= 0) {
		return;
	}
	// Neu pos <= 0 => Xoa dau
	if (pos < 0) {
		pos = 0;
	}
	// Neu pos >= n => Xoa cuoi
	else if (pos >= n) {
		pos = n - 1;
	}
	// Dich chuyen mang
	for (int i = pos; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	// Giam so luong phan tu sau khi xoa.
	--n;
}

int main() {
	int N,N1,i,j;
	cin >> N;
	int X[N];
	int X1[N];
	int Y[N-1];
	for (i = 0; i<N; i++) {
			cin >> X[i];
			cin >> X1[i];
	}
	for (i = 0; i<N; i++) {
		N1 = N;
		XoaPhanTu(X1, N1, i);
		int Y[i] = max(X1,N1-1);
		for (i = 0; i < N; i++) {
			N1[i] = N[i];
		}
	}
	for (ij= 0; j < N; j++) {
		cout << Y[j] << endl;
	}
}

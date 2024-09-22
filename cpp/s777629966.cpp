#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N, X;
	int MAX_LEFT[200009], MAX_RIGHT[200009];
	int A[200009];
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> A[i];
		if (i == 1) {
			MAX_LEFT[i] = A[i];
		} else {
			MAX_LEFT[i] = max(MAX_LEFT[i - 1], A[i]);
		}
	}
	MAX_RIGHT[N + 1] = -1e9;
	for (int i = N; i >= 1; --i) {
		if (i == N) {
			MAX_RIGHT[i] = A[i];
		} else {
			MAX_RIGHT[i] = max(MAX_RIGHT[i + 1], A[i]);
		}
	}
	for (int i = 1; i <= N; ++i){
		cout << max(MAX_LEFT[i - 1], MAX_RIGHT[i + 1]) << '\n';
	}
	return 0;
}
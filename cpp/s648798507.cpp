#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> V(N);
	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}
	for (int i = N - 1; i >= 0; i--){
		cout << V[i];
		if (i > 0)
			cout << " ";
		else
			cout << endl;
	}
}


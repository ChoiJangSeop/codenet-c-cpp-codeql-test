#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	vector<int> a;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	
	sort(a.rbegin(), a.rend());
	
	for(int i = 0; i < n; i++) {
		cout << a[i];
		if(i == n - 1) break;
		cout << " ";
	}
	
	cout << "\n";
	return 0;
}
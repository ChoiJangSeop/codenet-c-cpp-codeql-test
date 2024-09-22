#include <bits/stdc++.h>
#define int long long
#define double long double
const int INF = (int)1e18 + 18;
const int maxn = (int) 1e6 + 6; 
using namespace std;

int n;

vector<int> a, b, ans;

signed main() {

	cin >> n;

	for(int i = 0; i < n; i++){
		int x; cin >> x;
		a.push_back(x);
		b.push_back(x);
	}

	sort(b.begin(), b.end());

	//cout << b.back(); return 0;

	for(int i = 0; i < n; i++){
		int maxx = b.back();
		int y = lower_bound(b.begin(), b.end(), (a[i]-1)) - b.begin();
		if(a[i] == maxx) ans.push_back(b[y]);
		else ans.push_back(maxx);
	}

	for(int i = 0; i < n; i++){
		cout << ans[i] << endl;
	}


	return 0;
}
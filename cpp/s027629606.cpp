#include <iostream>
#include <string>
#include <sstream>
#include <iomanip> 
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <bitset>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, i, j, k;
	multiset<int> s;
	multiset<int>::iterator it;
	cin >> n;
	vector<int> a(n), ans(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	for (i = 0; i < n; i++) {
		it = s.find(a[i]);
		s.erase(it);

		ans[i] = *s.rbegin();

		s.insert(a[i]);
	}

	for (i = 0; i < n; i++) cout << ans[i] << "\n";

	return 0;
}


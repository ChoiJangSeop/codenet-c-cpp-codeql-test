#include <bits/stdc++.h>
#define	rep(i, n) for (int i = 0; i < (n); ++i)
using	namespace std;
using	ll = long long;
using	P = pair<int, int>;

int		main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int			n;
	int			max;
	int			second_max;
	cin >> n;
	vector<int>	A(n);
	vector<int>	B(n);

	rep(i, n)
		cin >> A.at(i);
	B = A;
	sort(B.begin(), B.end(), greater<>());
	max = B.at(0);
	second_max = B.at(1);
	rep(i, n)
	{
		if (A.at(i) != max)
			cout << max << "\n";
		else
			cout << second_max << "\n";
	}
}


#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<iterator>
#include<complex>
#include<stack>
using namespace std;
string s;
using MIte = multimap<int, int>::iterator;




int main() {
	long W, H, x, y;
	cin >> W >> H >> x >> y;

	double maxarea = (double)W * (double)H * 0.5;
	int onlyone = 0;
	if ((2 * x == W) && (2 * y == H)) {
		onlyone = 1;
	}
	else {
		onlyone = 0;
	}

	cout << fixed << setprecision(12) << maxarea << " ";
	cout << onlyone <<  endl;


	return 0;
}
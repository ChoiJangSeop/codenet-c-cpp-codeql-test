#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
typedef long long ll;

int main(int argc, char *argv[])
{
    int i, n;
	cin >> n;
	vector<int> a(n), b;
	int max, candidate;
	for (i = 0; i < n; i++) 
		cin >> a[i];

	b = a;
	sort(b.begin(), b.end());
	max = b[n - 1];
	candidate = b[n - 2];

	for (i = 0; i < n; i++) {
		if (a[i] != max) 
			cout << max << endl;
		else
			cout << candidate << endl;
	}

	
	

	return 0;
}

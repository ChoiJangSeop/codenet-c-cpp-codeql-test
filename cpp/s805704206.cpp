#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <list>
#include <numeric>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;

int a, b, c, n;
string s, t;


int main()
{
	cin >> n;
	vector<int> A(n);
	rep(i, n)
		cin >> A.at(i);
	sort(all(A));
	reverse(all(A));

	rep(i, n)
	{
		if (A.at(i) == A.at(1))
			cout << A.at(1) << endl;
		else
			cout << A.at(0) << endl;
	}


}

#include<iostream>
#include<set>
#include<stack>
#include<queue>
#include<string>
#include<algorithm>//min,max,swap,rand,reverse,sort,lower_bound
#include<functional>
#include<vector>
#include<list>
#include<map>
#include<tuple>
#include<cmath>//abs, sin, cos
#include<bitset>
using namespace std;

int main()
{
	int N, t, maxi=0;
	vector<int> A, A_copy;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
		A_copy.push_back(t);
	}
	for (int i = 0; i < N; i++) {
		maxi = 0;
		A = A_copy;
		A.erase(A.begin()+i);
		sort(A.begin(), A.end());
		for (int j = 0; j < N - 1; j++) {
			maxi = max(maxi, A[j]);
		}
		cout << maxi << endl;
		A.clear();
	}

	return 0;
}
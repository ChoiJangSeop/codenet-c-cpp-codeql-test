#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#define REP(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)

int sum;

using namespace std;

int bigG, suneo;
int ans;

int main() {
	int a[200000], n;
	cin >> n;
	rep(i, n) { cin >> a[i]; }


	rep(i, n) {
		if (suneo < a[i] && a[i] <= bigG) {
			suneo = a[i];
		}
		if (bigG < a[i]) {
			bigG = a[i];
		}
	}

	rep(i, n) {
		if (bigG == a[i]) { cout << suneo << endl; }
		else { cout << bigG << endl; }
	}


	return 0;
}

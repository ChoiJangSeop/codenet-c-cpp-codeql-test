#include <iostream>
#include <string> 
#include <vector> 
#include <algorithm> 
#include <utility> 
#include <tuple> 
#include <cstdint> 
#include <cstdio> 
#include <map> 
#include <queue> 
#include <set> 
#include <stack> 
#include <deque> 
#include <unordered_map> 
#include <unordered_set> 
#include <bitset> 
#include <cctype> 
#include<math.h>
using namespace std;

//#define int long long
#define endl "\n"
#define m_p make_pair
#define mod 1000000007
#define all(v)  v.begin(),v.end()
#define rep(i,n)  for(int i=0; i<(int) (n); i++)
#define all(v)  v.begin(),v.end()
#define vecin(v) for(int i=0; i<(int)v.size(); i++)cin>>v[i];
using namespace std;

int jousu(int, int);
int jousu(int x00, int y00) {
	int z00 = 1;
	for (int i = 0; i < y00; i++) {
		z00 *= x00;
	}
	return z00;
}
int keta(int x00) {
	int z00 = x00;
	int w00 = 0;
	while (z00 != 0) {
		z00 /= 10;
		w00++;
	}
	return w00;
}




int main() {
	int n, m1 = 0, m2 = 0, m3;
	cin >> n;
	vector<int>vec(n);
	rep(i, n) {
		cin >> vec[i];
		if (m1 <= vec[i]) {
			m2 = m1;
			m1 = vec[i];
			m3 = i;
		}
		else if (m2 <= vec[i]) {
			m2 = vec[i];
		}
	}
	rep(i, n) {
		if (i == m3) {
			cout << m2 << endl;
			continue;
		}
		cout << m1 << endl;
	}
}


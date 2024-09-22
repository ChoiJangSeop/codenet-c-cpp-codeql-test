#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
#include <set>
#include <cassert>
#include<cmath>
#include<climits>
#include<iomanip>
#include<sstream>
using namespace std;
#define MOD 1000000007
#define ll long long
const long long INF = 1LL << 60;

template<class T> inline bool chmin(T& a, T b) {
	if (a > b) {
		a = b;
		return true;
	}
	return false;
}
template<class T> inline bool chmax(T& a, T b) {
	if (a < b) {
		a = b;
		return true;
	}
	return false;
}

class UnionFind {
	vector<int> data;
public:
	UnionFind(int size) : data(size, -1) { }
	bool unionSet(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool findSet(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(int x) {
		return -data[root(x)];
	}
};


int find(vector<long long> &arr, long long obj) {
	if (arr[arr.size() - 1] < obj)return arr.size()-1;
	if (arr[0] > obj)return -1;

	int min = 0; int max = arr.size() - 1;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[min+(max-min) / 2] > obj) {
			max = min + (max - min) / 2;
		}
		else {
			min = min + (max - min) / 2;
		}
		if (max - min == 1) {
			return min;
		}
	}


}

void divisor(ll n,vector<ll> &ret) {
	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			ret.push_back(i);
			if (i * i != n) ret.push_back(n / i);
		}
	}
	sort(ret.begin(), ret.end());
	
}//約数求める


ll kaijou(int n) {
	ll temp = 1;
	for (int i = 2; i <= n; i++) {
		temp *= i;
		temp %= MOD;
	}
	return temp;
}

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < 3; i++) {
		if (s[i] == '1') {
			cout << 9;
		}
		else {
			cout << 1;
		}
	}
	return 0;
}
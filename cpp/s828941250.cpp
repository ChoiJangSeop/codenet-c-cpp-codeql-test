#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <iomanip>
#include<queue>
#include<algorithm>
#include <functional>
#include<vector>
#include <math.h>
#include <numeric>
#include <stack>
#include <map>
using namespace std;

const int n_max = 100001;
long long W, H, x, y;
int ismany = 0;

int main() {
	cin >> W >> H >> x >> y;
	if ((x == W / 2) && (y == H / 2)) ismany = 1;
	else if (((0 < x) && (x < W) && (x == W / 2)) || ((0 < y) && (y < H) && (y == H / 2))) ismany = 1;
	cout << W * H / 2.0 << endl;
	cout << ismany << endl;
}
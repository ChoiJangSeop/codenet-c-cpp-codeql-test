#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
typedef long long int ll;

typedef long double lld;

#define REP(i,n) for(int i=0;i<n;i++)
#define EPS (1e-7)
#define INF (1e9 + 1)
#define PI (acos(-1))

int W, H;
int x, y;

int main()
{
	cin >> W >> H >> x >> y;
	//まず縦に分割
	int w1 = abs(W - x);
	int s11 = H * w1;
	int s12 = H * x;
	int smin1 = INF;
	//面積0でないなら
//	if (s11 != 0 && s12 != 0) {
		//小さい方の面積きろく
		smin1 = min(s11, s12);
//	}

	int h1 = abs(H - y);
	int s21 = W * h1;
	int s22 = W * y;
	int smin2 = INF;
//	if (s21 != 0 && s22 != 0) {
		smin2 = min(s21, s22);
//	}
	cout << max(smin1, smin2) << " ";
	if (smin1 == INF || smin2 == INF) {
		cout << 0 << endl;
		return 0;
	}
	if (smin1 == smin2)
	{
		cout << 1 << endl;
	}
	else cout << 0 << endl;
}
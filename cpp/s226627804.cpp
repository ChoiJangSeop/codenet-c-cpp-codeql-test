#define _USE_MATH_DEFINES 
#include <cmath>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<vector>
#include<cctype>
#define rep(i,start,n) for(int i=start;i<n;i++)
#define And &&
#define Or ||
#define Lb cout<<endl
using namespace std;

int gcd(int x, int y) {
	int r;
	while (y > 0) {
		if (y > x)swap(x, y);
		r = x%y;
		x = y;
		y = r;
	}
	return x;
}

int main(void) {
	int a, b; cin >> a >> b;
	cout << gcd(a, b) << endl;

}
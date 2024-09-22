#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>

#define REP(i, a) for(int i=0;i<(int)a;++i)
typedef long long ll;
typedef long double ld;
using namespace std;

const double pi = 3.141592653589793;
double r;

double L(double r) { return 2 * pi * r; };

double S(double r) { return pi * r * r; };

void solver() {
    cin >> r;
    //cout << S(r) << " " << L(r) << endl;
    printf("%lf %lf\n", S(r), L(r));
}

int main() {
    solver();
    return 0;
}
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <memory>
#include <algorithm>
#include <cstring>

using namespace std;

unsigned long long w, h, x, y;

int main() {
    cin >> w >> h >> x >> y;
    long double l = min(((long double)x) * h, ((long double)(w - x)) * h);
    long double c = min(((long  double)y) * w, ((long  double)(h - y)) * w);
    cout << max(l, c) << " " << (fabs(l - c) <= 1e-9 ? "1" : "0");
    return 0;
}

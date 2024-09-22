#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

void solve(){
    int r;
    cin >> r;
    //cout << r * r * M_PI << " " << r * 2 * M_PI << endl;
    printf("%08f %08f\n", r*r*M_PI, r*2*M_PI);
}

int main() {
    solve();
    return 0;
}
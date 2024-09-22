#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <utility>
#include <math.h>

using namespace std;

#define ll long long

int main(){
    ll W, H, x, y;
    cin >> W >> H >> x >> y;
    cout << W*H/2 << " " << ((W/2 == x) && (H/2 == y)) << endl;
    return 0;
}

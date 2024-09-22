#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <numeric>
#include <iomanip>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define all(vec) vec.begin(),vec.end()
#define ll long long
#define debug(x) cout << "debug: " << x << endl;

int main(){
    int w, h, x, y;
    cin >> w >> h >> x >> y;
    cout << fixed << setprecision(10) << w * h / 2.0 << " ";
    if (w==2*x&&h==2*y)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    
}
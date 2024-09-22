#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int main()
{
    long long int w, h, x, y;
    long long int ans = 0, ans2;

    cin >> w >> h >> x >> y;

    if ((x == 0 && y == h) || (x == w || y == h) || (x == 0 && y == 0) || (x == w && y == 0)) {
        cout << (double)w*h/2 << " " << 0 << endl;
        return (0);
    }

    if (w == h && x == y) {
        cout << (double)w*h/2 << " " << 0 << endl;
        return (0);
    }

    if (w == h && min(x,y)+labs(x-y) == max(x, y)) {
        cout << (double)w*h/2 << " " << 0 << endl;
        return (0);
    }

    if (w-x < x) {
        ans = (w-x)*h;
    }
    else {
        ans = x*h;
    }
    if (h-y < y) {
        ans2 = (h-y)*w;
    }
    else {
        ans2 = y*w;
    }
    if (ans == ans2) {
        cout << ans << " " << 1 << endl;
    }
    else if (ans > ans2) {
        cout << ans << " " << 0 << endl;
    }
    else {
        cout << ans2 << " " << 0 << endl;
    }
}

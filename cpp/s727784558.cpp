#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int W, H, x, y;
    cin >> W >> H >> x >> y;

    double ans = max((double)W * (double)H - (double)x * (double)H, (double)W * (double)H - (double)y * (double)H);
    cout << fixed << setprecision(12) << ans << ' ';
    int other = 0;
    if ((double)W * (double)H - (double)x * (double)H == (double)W * (double)H - (double)y * (double)H)
    {
        other++;
    }
    cout << other << endl;

    return 0;
}
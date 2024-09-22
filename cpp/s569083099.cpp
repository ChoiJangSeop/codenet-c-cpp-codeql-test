#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long W, H, x, y;
    cin >> W >> H >> x >> y;

    cout << setprecision(20) << double(W * H) / 2. << " ";
    cout << (x * 2 == W && y * 2 == H) << endl;
}

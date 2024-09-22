#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int W, H, x, y;
    cin >> W >> H >> x >> y;

    cout << (float)W*(float)H/2.0 << " ";

    // W*Hの中心にx,yがあれば分割方法は無限通りある
    if (W%2==0 && H%2==0)
        if (W/2==x && H/2==y)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    else
        cout << "0" << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    double n, m;
    double x, y;
    cin >> n >> m >> x >> y;
    cout << n * m / 2.0;
    if ((int) n % 2 == 0 && x == n / 2 && 
        (int) m % 2 == 0 && y == m / 2)
        cout << " 1";
    else
        cout << " 0";
    return 0;
}

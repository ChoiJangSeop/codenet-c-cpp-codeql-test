// ２つの整数の最大公約数を求める
#include<iostream>
using namespace std;

int main()
{
    int x, y, r;
    int gcd = 0;
    cin >> x >> y;
    if (x > y) 
    {
        r = x % y;
    }
    if (x < y)
    {
        r = y % x;
        x = y;
    }
    if ( x == y)
    {
        r = x;
    }
    
    for (int i = 1; i <= r; i++)
    {
        if( r % i == 0 &&  x % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd << endl;

    return 0;
}

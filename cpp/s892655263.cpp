#include <iostream>

using namespace std;
int gcd(int a, int b)
{
    
    if (a < b)
    {
        int d = a;
        a = b;
        b = d;
    }
    while(b > 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << gcd(a, b) << endl;
    
    return 0;
}

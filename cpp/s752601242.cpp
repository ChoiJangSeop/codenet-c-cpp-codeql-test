#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    while( cin >> a >> b ){
        c = log10( a + b ) + 1;
        cout << c << endl;
    }
    return 0;
}
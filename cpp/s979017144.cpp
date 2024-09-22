#include <iostream>
#include <cstdio>
#include <cmath>

int main( void )
{
    int r;
    std::cin >> r;
    printf( "%.6f %.6f\n", M_PI * r * r, M_PI * 2 * r );
    return 0;
}
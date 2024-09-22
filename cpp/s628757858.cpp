#include <iostream>
using namespace std;
int main()
{
    int r;
    double p = 3.141592653589;
    double s,l;
    cin >> r;
    s = 1.0 * r * r * p;
    l = 1.0 * r * 2 * p;
    printf("%.6lf %.6lf\n",s,l);
    return 0;
}

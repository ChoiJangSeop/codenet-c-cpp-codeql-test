#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double r,t,f;
    cin >> r;
    f=r*r*3.14159265358979;
    t=2*r*3.14159265358979;
    cout << fixed;
    cout << setprecision(8) << f << " " << setprecision(8) << t << endl;
}


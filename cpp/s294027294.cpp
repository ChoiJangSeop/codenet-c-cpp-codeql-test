#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int r;
    cin >> r;
    cout << fixed << setprecision(10);
    cout << M_PI * r * r << " ";
    cout << M_PI * 2 * r << endl;
}
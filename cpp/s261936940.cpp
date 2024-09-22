#include<iostream>
using namespace std;

int gcd(int x, int y) {
    int temp;
    if (x < y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    return 0;
}

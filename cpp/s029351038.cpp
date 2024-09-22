#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    while(y != 0) {
        int tmp = y;
        y = x%y;
        x = tmp;
    }
    cout << x << endl;

    return 0;
}
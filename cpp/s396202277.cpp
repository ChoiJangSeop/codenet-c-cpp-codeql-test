#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    while(x|y) {
        if(x>=y) x %= y;
        else if (x < y) y %= x;
    }
    if (x==0) cout << x << endl;
    else if(y==0) cout << y << endl;
}
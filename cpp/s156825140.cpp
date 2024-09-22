#include <iostream>
using namespace std;

int main() {
    int q, y;
    int max = 1;
    int top;
    cin >> q >> y;
    if (q > y) {
        top = y;
    } else {
        top = q;
    }

    for (int i = 1; i < top / 2; i++) {
        if ((q % i == 0) && (y % i == 0)){
            if (i > max) {
                max = i;
            }
        }
    }
    if(q == y) {
        max = q;
    }

    cout << max << endl;

}

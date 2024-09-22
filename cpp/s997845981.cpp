#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, gcd, temp1, temp2;
    bool flag = true;
    cin >> x >> y;
    if (x == y) {
        int gcd = x;
        cout << gcd << endl;
        return 0;
    }
    else if (x > y){
        temp1 = x % y;
        temp2 = y;
    }
    else if (y > x) {
        temp1 = y % x;
        temp2 = x;
    }
    while (flag) {
        if (temp1 == 0) {
            gcd = temp2;
            break;
        }
        temp2 = temp2 % temp1;
        if (temp2 == 0) {
            gcd = temp1;
            break;
        } 
        //この時点でtemp2<temp1
        temp1 = temp1 % temp2;
    }
    cout << gcd << endl;
    return 0;
}

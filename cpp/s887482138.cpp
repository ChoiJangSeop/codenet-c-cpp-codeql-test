#include <iostream>
using namespace std;
     
int main() {
    int gcd[2];
    cin >> gcd[0] >> gcd[1];
    while (gcd[0] != 0 && gcd[1] != 0) {
        if(gcd[0] < gcd[1]) {
            gcd[1] = gcd[1] % gcd[0];
        } else {
            gcd[0] = gcd[0] % gcd[1];
        }
    }
    
    if(gcd[0] == 0) {
        cout << gcd[1] << endl;
    } else {
        cout << gcd[0] << endl;
    }
}

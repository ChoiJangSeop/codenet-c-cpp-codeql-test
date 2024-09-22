#include <bits/stdc++.h>
using namespace std;

int i_gcd(int a, int b) {
    if (a%b == 0) {
        return b;
    } else {
        return i_gcd(b, a%b);
    }
}

int main(void) {
    int a, b;
    cin >> a >> b;
    printf("%d\n", i_gcd(a, b));

    return 0;
}

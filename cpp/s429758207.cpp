#include <iostream>

int gcd(int x, int y) {
    if (x < y) {
        std::swap(x, y);
    }

    for (int r; y != 0;) {
        r = x % y;
        x = y;
        y = r;
    }

    return x;
}

int main() {
    int x, y;
    std::cin >> x >> y;

    std::cout << gcd(x, y) << '\n';
}


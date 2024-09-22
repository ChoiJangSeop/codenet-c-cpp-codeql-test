#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    std::reverse(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        std::cout << a[i];
        if (i < n - 1) {
            std::cout << ' ';
        }
    }
    std::cout << std::endl;
}


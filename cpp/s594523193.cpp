#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int xs[n];
    for (int i = 0; i < n; i++){
        std::cin >> xs[i];
    }
    for (int i = n - 1; i > 0; i--){
        std::cout << xs[i] << ' ';
    }
    std::cout << xs[0] << '\n';
    return 0;
}


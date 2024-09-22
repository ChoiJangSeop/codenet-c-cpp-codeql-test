#include <iostream>

int main()
{
    
        int a;
        int b;
        std::cin >> a;
        std::cin >> b;

        int c = a + b;
        int digit = 1;
        bool loop = true;
        while (loop) {
            if (c / 10 >= 1) {
                digit += 1;
                c = (c - (c % 10)) / 10;
            } else {
                loop = false;
                break;
            }
        }
        std::cout << digit << std::endl;

    
}
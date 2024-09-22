#include<iostream>

int main() 
{
    std::string input;
    std::cin >> input;
    for (int i = 0; i < 3; ++i) {
        if (input[i] == '1') {input[i] = '9';}
        else {input[i] = '1';}
    }
    std::cout << input << std::endl;
    return 0;
}
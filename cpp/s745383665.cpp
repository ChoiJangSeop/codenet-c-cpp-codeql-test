#include <iostream>
#include <string>
#include <cmath>
#include <vector>

int main() {
    std::string s;
    std::vector<char> v;

    std::cin >> s;

    for(int i=0;i<s.size();i++){
        if(s[i] == 'B'){
            if(v.size()) v.pop_back();
        } else {
            v.push_back(s[i]);
        }
    }

    for(int i=0;i<v.size();i++){
         std::cout << v[i];
    }

    std::cout << std::endl;
}
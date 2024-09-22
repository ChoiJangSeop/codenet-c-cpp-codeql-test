#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;

    std::cout << "size of s: " << s.size() << std::endl;
    std::string::iterator itr = s.begin();
    while(!s.empty() && s.end() != itr){
        if('B' == *itr){
            if(s.begin() == itr){
                s.erase(itr);
            }else{
                s.erase(itr - 1, itr);
                --itr;
            }
        }else{
            ++itr;
        }
    }
    std::cout << "size of s: " << s.size() << std::endl;
    std::cout << s << std::endl;
}

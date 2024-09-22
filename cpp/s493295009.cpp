#include<iostream>
#include<math.h>

int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<(int)(log10(a+b))+1<<std::endl;
    return 0;
}
#include<iostream>
#include<iomanip>
#define PI 3.141592653589
int main(){
double r;
std::cin>>r;
std::cout<<setprecision(10)<<r*r*PI<<" "<<2.0f*r*PI<<std::endl;
return 0;
}
#include <iostream>
#define PI 3.141592653589

int main(){
double r;
double area, cir;
std::cin >> r;
area = r * r * PI;
cir = 2 * r *PI;

std::cout << area << ' ' << cir << std::endl;

}
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    double a;
    double PI = acos(-1);
    
    cin >> a;
    printf("%1f %1f\n", a*a*PI, 2*a*PI);
    
    return 0;
}
#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
    
    double r,p=3.141592653589,S,L;
    cin>>r;
    S = r*r*p;
    L = 2*r*p;
    printf("%.8f %.8f", S, L );
    
    return 0;
}

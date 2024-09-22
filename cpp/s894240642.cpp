#include<stdio.h>
#include <math.h>
using namespace std;
int main(){
    double r,V,S;
    scanf("%lf", &r);
    V = r*r*M_PI;
    S = 2*r*M_PI;
    printf("%f %.5lf", V ,S);
    return 0;
}

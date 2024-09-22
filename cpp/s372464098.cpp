
#include<cstdio>
#include<cmath>

int main(){
    double r;
    scanf("%lf",&r);

    double area = M_PI * r * r;
    double circumference = 2.0 * M_PI * r;

    printf("%.5f %.5f\n",area,circumference);
    return 0;
} 

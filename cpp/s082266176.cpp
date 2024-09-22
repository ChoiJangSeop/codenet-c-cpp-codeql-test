#include<iostream>
#include<algorithm>
#include <float.h>
#include<stdio.h>
#include<math.h>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int r;

    cin >> r;   

    printf("%5f %5f\n", r*r*M_PI, 2*M_PI*r);
    return 0;

}


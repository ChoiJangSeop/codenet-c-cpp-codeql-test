#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <set>
#include <queue>
#include <math.h>
#include <stdbool.h>

#define LL long long
#define inf 0x3f3f3f3f
using namespace std;
const int MAXN=1000005;

int main(){
    int w,h,x,y;
    cin>>w>>h>>x>>y;
    double m=(double)w/2*h;
    printf("%.6lf ",m);
    if(x*2==w&&y*2==h)
        puts("1");
    else puts("0");
}
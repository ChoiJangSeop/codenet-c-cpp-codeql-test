#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<tgmath.h>
using namespace std;

#define lld long long

lld gcd(lld x, lld y){
    while (y > 0)
    {
        lld r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
    lld a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;   
}

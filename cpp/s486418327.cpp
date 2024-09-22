#include<iostream>
#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<string>
#include<cmath>
using namespace std;

int gcd(int x,int y){
    int larger,smaller;
    if(x>y){
        larger=x;
        smaller=y;
    }
    else{
        larger=y;
        smaller=x;
    }
    int mod,divided,divisor;
    divisor = smaller;
    divided = larger;
    while(1){
        mod = divided%divisor;
        if(mod==0)return divisor;
        divided=divisor;
        divisor=mod;
    }
    return -1;
}

int x,y;

int main(){
    cin>>x>>y;
    cout<<gcd(x,y)<<endl;
    return 0;
}


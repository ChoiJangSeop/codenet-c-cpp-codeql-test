#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a>b)return gcd(b,a);
    int x = b%a;
    if(x==0){
        return a;
    }else{
        return gcd(x,a);
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
}

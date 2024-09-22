#include<bits/stdc++.h>
using namespace std;

int calc_gcd(int x,int y){
    if(y == 0){
                return x;
    }
    else{
                return calc_gcd(y,x%y);
    }
}

int main(){
    int x,y;
    cin >> x >> y;
    if (x >= y){
        cout << calc(x,y) << endl;
    }
    else{
        cout << calc(y,x) << endl;
    }
}

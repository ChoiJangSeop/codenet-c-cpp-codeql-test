#include<iostream>

using namespace std;

int main(){
    int i,j,a,b;
    cin >> a >> b;
    for(i=a;i>0;--i){
        if(a%i==0 && b%i==0){
            cout<<"gcd="<<i<<endl;
            break;
        }
    }
    return 0;
}
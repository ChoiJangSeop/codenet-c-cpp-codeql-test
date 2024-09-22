
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a<b)swap(a,b);
    while(b!=0){
        int c,d;
        c=a/b;
        d=a%b;
        a=b;
        b=d;
    }
    cout<<a<<endl;;
    
}


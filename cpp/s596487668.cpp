#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int gcd(int x,int y){
    if(x<y)swap(x,y);
    while(y){
        int r=x%y;
        x=y;
        y=r;
        if(x<y)swap(x,y);
    }
    return x;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}

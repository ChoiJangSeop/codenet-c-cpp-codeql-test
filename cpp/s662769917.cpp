#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    double W,H;
    int x,y;
    cin>>W>>H>>x>>y;
    cout<<(double)W/2*(double)H<<" ";
    if(x==(double)W/2 && y==(double)H/2)cout<<1<<endl;
    else cout<<0<<endl;

    return 0;
}
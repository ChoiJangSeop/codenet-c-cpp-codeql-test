#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    int a[3];
    a[0]=n/100;
    a[1]=(n-100*a[0])/10;
    a[2]=n-a[0]*100-a[1]*10;
    for(int i=0;i<3;i++){
        if(a[i]==1) a[i]=9;
        else if(a[i]==9) a[i]=1;
    }
    for(int i=0;i<3;i++){
        cout<<a[i];
    }
    return 0;
}

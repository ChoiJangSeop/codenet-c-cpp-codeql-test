#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
     int b;
    cin>>b;
    vector<int> d(b);
    for(int i = 0;i<b;i++){
    cin>>d.at(i);
    }
   reverse(d.begin(), d.end());
    for(int i = 0;i<b;i++){
        cout<<d.at(i);
        cout<<" ";
    }
return 0;
}


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    string s;
    cin>>s;
    vector<int>P;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            P.push_back(0);
        }
        else if(s[i]=='1'){
            P.push_back(1);
        }
        else{
            if(P.size()==0)continue;
            P.pop_back();
        }
    }
    for(int i=0;i<P.size();i++){
        cout<<P[i];
    }
    cout<<endl;
}

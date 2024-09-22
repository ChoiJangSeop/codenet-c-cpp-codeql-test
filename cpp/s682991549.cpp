#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;cin>>n;
    for(int i;i<n.size();i++){
        if(n[i]=='1')printf("9");
        if(n[i]=='9')printf("1");
    }
    cout<<endl;
}
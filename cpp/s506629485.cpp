#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;
#define rep(i, n) for(ll i = 0; i < n; i++)

int main(){
    string s,t;
    ll n=s.size();
    cin>>s;
    for(ll i=0;i<n;++i){
        if(s[i]=='B'){
            t.pop_back();
            cout<<t<<endl;
        }else{
            t.push_back(s[i]);
            cout<<t<<endl;
        }
    }
    cout<<t<<endl;
}
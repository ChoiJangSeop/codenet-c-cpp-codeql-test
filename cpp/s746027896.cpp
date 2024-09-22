#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
const int INF=1e9;

int main(){
    int w,h,x,y;
    cin>>w>>h>>x>>y;
    cout<<(ll)w*h/2.0<<" ";
    if(2*x==w&&2*y==h)cout<<1<<endl;
    else cout<<0<<endl;
}

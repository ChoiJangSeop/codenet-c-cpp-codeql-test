#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    vector<int>  t(n);
    rep(i,n){
        t[i]=a[i];
    }
    sort(t.rbegin(),t.rend());
    rep(i,n){
        if(a[i]==t[0]) cout << t[1] <<endl;
        else cout << t[0]<<endl;
    }
    
    
    
    
    return 0;
}

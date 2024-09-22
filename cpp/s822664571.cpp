#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int MOD=1e9+7;
#ifndef HOME
#define cerr if(0)cerr
#endif

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    int first=b[n-1];
    int second=b[n-1];
    for(int i=n-2;i>=0;i--){
        if(b[i]!=first){
            second=b[i];
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==first){
            cout<<second<<endl;
        }else{
            cout<<first<<endl;
        }
    }
    
    return 0;
    
}


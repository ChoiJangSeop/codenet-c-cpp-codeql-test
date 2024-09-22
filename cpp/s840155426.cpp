#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define all(v) v.begin(),v.end()

using namespace std;
typedef long long ll;




int main()
{
    
    vector<char> n(3);
    rep(i,3) cin>>n[i];
    rep(i,3){
        if(n[i] == '1') cout << '9';
        else cout << '1';
    }
    cout << endl;
    
    
    return 0;
}



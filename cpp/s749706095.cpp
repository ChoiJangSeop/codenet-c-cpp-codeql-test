#include <bits/stdc++.h>
#define int long long
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef pair<int,int>P;
typedef pair<int,P>P2;
#define fi first
#define se second

main(){
    string s;
    cin>>s;
    r(i,3){
        if(s[i]=='1')s[i]='9';
        else if(s[i]=='9')s[i]='1';
    }
    cout<<s<<endl;
}
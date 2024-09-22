#include <bits/stdc++.h>

#define ll long long
#define mx  505
#define mod 1000000009
#define lim 100000000000000000
#define inf 2000000000
#define N 18
#define eps 100000
#define PI acos(-1)

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    string s;cin>>s;

    for(int i=0;i<s.size();i++)
       if(s[i]=='9')s[i]='1';
       else s[i]='9';
    cout<<s<<"\n";   
    return 0;
}

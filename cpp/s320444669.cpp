#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int       lint;
typedef vector<int>         vi;
typedef vector<lint>        vl;
typedef pair<int, int>      pii;
typedef vector<pii>         vii;
typedef set<int>            si;
typedef map<string, int>    msi;
 
#define pb(n)           push_back(n)
#define ALL(n)          (n.begin(), n.end())
#define SORT(n)         (n.begin(), n.end(), greater<lint>())       
#define db(a)           cout<<#a<<" = "<<a<<endl;
#define FIN             freopen("in.txt","r",stdin);
#define FOUT            freopen("out.txt","w",stdout);
#define M               10000000
#define MOD             10000007
#define INF             10000000000000000
#define REP(i,a,b)      for(int i = int(a); i <= int(b); i++)
#define REPL(i,a,b)     for(lint i = lint(a); i <= lint(b); i++)
#define fastIO()        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    stack<char>st;
    string s;
    cin>>s;

    REP(i, 0, s.size() - 1){
        if(s[i] == '0' || s[i] == '1') st.push(s[i]);
        else if(s[i] == 'B' && !st.empty()) st.pop();
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;

    return 0;
}

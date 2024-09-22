//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef map<int, int> mii;
typedef map<char,int> mci;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<pair<int,int>> vii;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define in insert
#define sz(v) v.size()
#define mina(a,b) (a)=min((a),(b));
#define maxa(a,b) (a)=max((a),(b));
const int INF = 1e9 + 5;
void solve(){
    ll W, H, x, y;
    cin>>W>>H>>x>>y;
    int b=0;
    if(x==W/2 && y==H/2) b=1;
    double ans=W*H/2;
    cout<<setprecision(6)<<fixed<<ans;
    cout<<" "<<b;

}
int main(){
    int T=1;
    //cin>>T;
    for(int i = 0; i < T; i++) solve(); 
}
#include <bits/stdc++.h>
 
using namespace std;
 
#define ull unsigned long long
#define ll long long
#define int long long
#define ld long double
 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
#define MX LLONG_MAX
#define MN LLONG_MIN

const ll mod=1e9+7;
const ll N=1e5+5;
 
ll powermodm(ll x,ll n,ll M){ll result=1;while(n>0){if(n % 2 ==1)result=(result * x)%M;x=(x*x)%M;n=n/2;}return result;}
ll power(ll _a,ll _b){ll _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}          
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
ll modinv(ll a,ll m);

int32_t main()                  
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll w,h,x,y;
    cin>>w>>h>>x>>y;
    ll a,b,c,d;
    a = w*y;
    b = w*(h-y);
    c = x*h;
    d = (w-x)*h;
    ll ans = max(min(a,b),min(c,d));
    ll co = 0;
    if( (a==ans || b==ans) && (d==ans || c==ans))
        co = 1;
    cout<<fixed;
    cout<<setprecision(6)<<ans*(1.0)<<" "<<co;
    
    return 0;
}  
void EE(ll a,ll b,ll &co1,ll &co2)
{
    if(a%b==0)
    {
        co1=0;
        co2=1;
        return;
    }
    EE(b,a%b,co1,co2);
    ll tmp=co1;
    co1=co2;
    co2=tmp-co2*(a/b);
}
ll modinv(ll a,ll m)
{
    ll x,y;
    EE(a,m,x,y);
    if(x<0) x+=m;
    return x;
}
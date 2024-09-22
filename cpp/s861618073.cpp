#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define REPR(i,n) for(ll i = n;i >= 0;--i)
#define FOR(i,m,n) for(ll i = m, i##_len=(n);i <i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
const int INF = 1e9;
const ll LLINF = 1e16;

ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}


int main(void)
{
    double w,h,x,y;
    vector<double> s;

    cin >> w >> h >> x >> y;

    if(x == w || x == 0 || y == 0 || y == h){
        printf("%.7lf %d\n",w*h/2,0);
    }
    else if(x == w/2 && y == h/2){
        printf("%.7lf %d\n",w*h/2,1);

    }
    else{
        if((h-y)/x*w<h){
            s.push_back(w*w*(h-y)/x/2);
        }
        else{
            s.push_back(h*h*x/(h-y)/2);
        }

        if((h-y)/(w-x)*w < h){   
            s.push_back(w*w*(h-y)/(w-x)/2);
        }
        else{
            s.push_back(h*h*(w-x)/(h-y)/2);
        }

        if(y/x*w < h){
            s.push_back(y/x*w*w/2);
        }
        else{
            s.push_back(x/y*h*h/2);
        }

        if(y/(w-x)*w < h){   
            s.push_back(y/(w-x)*w*w/2);
        }
        else{
            s.push_back((w-x)/y*h*h/2);
        }
        if(x < w -x){
            s.push_back(x*h);
        }
        else{
            s.push_back((w-x)*h);
        }
        if(y < h - y){
            s.push_back(y*w);
        }
        else{
            s.push_back((h-y)*w);
        }

        sort(all(s));

        if(s[s.size()-1] == s[s.size()-2]){
            printf("%.7lf %d",s[s.size()-1],1);
        }
        else{
            printf("%.7lf %d",s[s.size()-1],0);
        }


    }
    
    

    return 0;
}
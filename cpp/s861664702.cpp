#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define fi first
#define se second
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rep11(i, n) for (int i = 1; i < (int)(n); ++i)
#define repo(i, o, n) for (int i = o; i < (int)(n); ++i)
#define repm(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb(n) push_back(n)
#define mp make_pair
#define MOD 1002000007
#define INF LONG_LONG_MAX
typedef pair<int, int> P;
int main(){
    double w,h,x,y;
    cin>>w>>h>>x>>y;
    double t1,t2;
    t1=y-(h/w)*x;
    t2=y+(h/w)*x;
    double s[4];
    s[0]=x*h;
    s[1]=y*w;
    s[2]=(1/2)*(w/h)*(h-t1)*(h-t1);
    s[3]=(1/2)*(w/h)*t2*t2;
    rep(i,4){
        s[i]=min(s[i],w*h-s[i]);
    }
    double ans=-1.00;
    bool flag=0;
    rep(i,4){
        ans=max(s[i],ans);
        if(s[i]==ans){
            flag=1;
        }
    }
    if(flag==1){
        cout<<double(ans)<<" "<<1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    
}

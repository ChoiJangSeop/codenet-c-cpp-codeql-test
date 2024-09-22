#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(),(x).end()
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define sp <<" "<<
#define CST(x) cout<<fixed<<setprecision(x)
#define PI 3.14159265359
#define MOD 1000000007
using namespace std;
using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;
using que_a = priority_queue<int, vector<int>, greater<int> >;
using que_d = priority_queue<int>;
using pint = pair<int,int>;

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a.at(i);
    }
    reverse(all(a));
    rep(i,n-1) {
        cout << a.at(i) <<  " ";
    }
    cout << a.at(n-1) << endl;

    return 0;
}

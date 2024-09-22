#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<numeric>

#define REP(i, a) for(int i=0;i<(int)a;++i)
#define INF 1145141919;
typedef long long ll;
typedef long double ld;
using namespace std;

int n,tmp;
vector<int>a;
void solver() {
    cin>>n;
    REP(i,n){
        cin>>tmp;
        a.push_back(tmp);
    }
    reverse(a.begin(),a.end());
    for(int &x:a)
        cout<<x<<" ";
    cout<<endl;
}

int main() {
    solver();
    return 0;
}
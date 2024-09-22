#include<iostream>
#include<vector>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define ppb pop_back
#define INF 1e18
typedef long long ll;

using namespace std;

int main(int argc,char* argv[])
{
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    vector<int>sorted = a;
    sort(all(sorted),greater<int>());
    rep(i,n)
    {
        if(a[i] == sorted[0])
        {
            cout<<sorted[1]<<endl;
        }
        else
        {
            cout<<sorted[0]<<endl;
        }
    }
    return 0;
}
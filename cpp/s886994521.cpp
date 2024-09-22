#include <iostream>
#include <sstream>
using namespace std;
#include <bits/stdc++.h>
#include<utility>
#include <algorithm>
#include<iterator>
#define  go return 0
#define pb push_back
#define lp(j, n)  for(int j=0; j<(int)(n); ++j)
#define rep(i,n) for(int i=0;i<n;++i)
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)    ( (int)((v).size()) )
#define F first
#define S second
#define m_p make_pair
typedef long long ll;
typedef double db;
typedef vector<int> ve;
typedef pair<int, int> pi;
typedef vector<pair<int,int> > vpii;
typedef map<int, int> mii;
const ll N=1e5+5;
ll arr[N],A[N],ARR[N]  ;
bool visited[N]={};
int cnt[N]={};
bool f;
int main()
{

  int n; cin>>n;
  ve arr(n),A(n);
  rep(i,n&&cin>>arr[i])
  {
      A[i]=arr[i];
  }
     sort(all(A));
  rep(i,n)
 {
    if(arr[i]<A[n-1])
        cout<<A[n-1]<<endl;
    else
        cout<<A[n-2]<<endl;
 }
go;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long ll;
#define loop(n)      for(int i=0;i<(n);i++)
#define lp(x,s,e)    for(int x=(s);x<(e);x++)
#define lpe(x,s,e)    for(int x=(s);x<=(e);x++)
#define MP make_pair
#define PB push_back
#define all(a)  a.begin(),a.end()
#define clr(x,val) memset((x),(val),sizeof(x))
#define endl '\n'

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
     if(s[i]=='B'){
     s.erase(i-1,2);
     }
    }
    cout<<s;}


#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>//辞書順はnext_permutation
#include<set>
#include<string>
#include<time.h>
#include<random>
#include<cmath>
#include<math.h>
#include<queue>
#include<time.h>
#include<utility>//swap(数値交換)
#define rt "\n"
#define rep(i,n) for(int i=0;i<n;i++)
#define rop(i,n) for(int i=1;i<=n;i++)
#define drep(i,n) for(int i=n-1;0<=i;i--)
#define yes(ans) if(ans)cout<<"yes"<<rt;else cout<<"no"<<rt;
#define Yes(ans) if(ans)cout<<"Yes"<<rt;else cout<<"No"<<rt;
#define YES(ans) if(ans)cout<<"YES"<<rt;else cout<<"NO"<<rt;
#define sort(s) sort(s.begin(),s.end())
#define reve(s) reverse(s.begin(),s.end())
#define asas int ans=0
#define cncn int cnt=0
#define please return
#define AC 0

using namespace std;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<char> vcha;
typedef long long int llint;
typedef pair<int, int> pint;
typedef pair<llint, llint> pllint;
typedef vector<llint> vllint;
typedef vector<pint> vpint;
typedef vector<pair<llint, llint>> vpllint;
typedef vector<vector<int>> vvint;
typedef vector<vector<llint>> vvllint;
typedef vector<vector<pint>> vvpint;
typedef vector<bool> vbool;
long long GCD(long long a, long long b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}


int main(void) {
string s;
cin>>s;
string ans;
rep(i,s.size()){
if(s[i]=='0')ans.push_back('0');
if(s[i]=='1')ans.push_back('1');
if(s[i]=='B')ans.erase(i-1);
}
cout<<ans<<rt;
	please AC;
}

// abc : 141 , aoj : ITP1_6_D
//sort, abs, swap, reverse, max, min
//__gcd, sbstring, erase, push_back,stoll、stoi
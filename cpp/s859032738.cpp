#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#define rep(i,a,n) for(ll i =(a);i<(n);i++)
#define urep(i,a,n) for(ll i = (a);i>=(n);i--)
#define all(x) (x).begin(),(x).end()
#define INF 1e30
const int mod = 1e9 + 7;
typedef long long ll;
using namespace std;
ll dx[4] = { 1,-1,0,0 };
ll dy[4] = { 0,0,1,-1 };
ll N, M, Q, H, W, L, R, K, X, A, B, C, Z;
ll ans;
string S;
bool D[10];
ll x[100000000];
ll y[100000000];
ll nowcost = 1;
ll twopow[202020];
ll gcd(ll a, ll b) {
	if (b == 0)return a;
	else return gcd(b, a%b);
}
ll m[100][100];
ll DP[1000001];
int main() {
	cin>>S;
	string ans="";
	rep(i,0,S.size()){
		if(S[i]!='B')ans+=S[i];
		else{
			if(!ans.empty())
			ans.pop_back();
		}
	}
	cout<<ans<<endl;
	return 0;
}
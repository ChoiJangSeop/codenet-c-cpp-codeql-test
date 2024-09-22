#include <bits/stdc++.h>
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); i++) 
#define FOR(i, a, b) for(int (i) = a; (i) < (int)b; i++)
#define RREP(i, n) for(int (i)=((int)(n)-1); (i)>=0; i--)
#define RFOR(i, a, b) for(int (i) =((int)(b)-1); (i)>=(int)a; i--)
#define ALL(v) (v).begin(),(v).end()
#define MOD 1000000007
#define FI first
#define SC second
#define MP make_pair
#define PB push_back
#define SZ(x)  (int)x.size()


using namespace std ;
typedef long long ll;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef vector<string> vstr;
typedef pair<int, int> pii;
const int INF = 1e9;
const int LINF = 1e18;
const double EPS = 1e-9;
ll cnt = 0;
ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}


int main()
{
  double w, h, x, y ;
  cin >> w >> h >> x >> y ;
  int fl = 0 ;
  if(x==w/2 && y == h/2){
    fl = 1 ;
  }
  
  cout << setprecision(10) << w*h/2 << " " << fl <<endl ;


  return 0 ;
}



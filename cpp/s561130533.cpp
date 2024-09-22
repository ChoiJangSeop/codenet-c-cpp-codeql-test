#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)

#define INF INT_MAX/3
#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define SET(a,c) memset(a,c,sizeof a)
#define CLR(a) memset(a,0,sizeof a)
#define PII pair<int,int>
#define PCC pair<char,char>
#define PIC pair<int,char>
#define Pci pair<char,int>
#define VS vector<string>
#define VI vector<int>
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define MIN(a,b) (a>b?b:a)
#define MAX(a,b) (a>b?a:b)
#define PI 2*acos(0.0)
#define INFILE() freopen("in0.txt","r",stdin)
#define OUTFILE() freopen("out0.txt","w",stdout)
#define IN scanf
#define OUT(x) cout<<x<<endl
#define LL long long
#define ll long long
#define ULL unsigned long long
#define EPS 1e-14
#define FST first
#define SEC second

#include<iostream>

using namespace std;
int main()
{
  string r = "";
  // 入力
  string a;
  cin >> a;
  
  REP(i, a.size()) {
    switch(a[i]) {
      case 'B': 
        r.pop_back();
        break;
      default:
        r += a[i];
        break;
    }
  }
  OUT(r);
  return 0;
}

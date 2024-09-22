#include <bits/stdc++.h>
using namespace std;

//--------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define LL long long
#define INF INT_MAX/3

//--------------------------------------------
const double EPS = 1e-14;
const double PI  = acos(-1.0);

//--------------------------------------------

int gcd (int s, int t) {
  if (s < t) swap(s,t);
  return t != 0 ? gcd(t, s % t) : s;
}

int main(){
  int a, b;
  scanf("%d %d",&a,&b);
  printf("%d\n",gcd(a, b));
}
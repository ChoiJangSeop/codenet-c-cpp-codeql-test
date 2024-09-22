#include <bits/stdc++.h>

using namespace std;
 
#define rep2(x,fr,to) for(int (x)=(fr);(x)<(to);(x)++)
#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)
#define repr(x,fr,to) for(int (x)=(fr);(x)>=(to);(x)--)
#define all(c) (c).begin(),(c).end()
#define sz(v) (int)(v).size()

typedef int64_t ll; typedef vector<int> VI; typedef pair<int,int> pii;
const int MD = 1e9+7; typedef vector<ll> VL;
void dbg(){ cerr << "\n"; }  template <typename T,typename ...T2>
void dbg(const T& fst, const T2&...rst){ cerr << fst << ": "; dbg(rst...); }

int main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);
	double w, h, x,y;
	cin >>w >>h >>x >>y;
	int as2 = (x*2 ==w && y*2==h)? 1: 0;
	cout << w * h /2.0 <<" "<<as2 <<"\n";
	return 0;
}

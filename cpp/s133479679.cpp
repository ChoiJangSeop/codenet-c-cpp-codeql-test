#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <bitset>
#include <cstdio>
#include <cctype>
#include <string>
#include <cstring>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std ;

#define rep(i, a, b) for (int (i)=(a);(i)<=(b);(i)++)
#define Rep(i, a, b) for (int (i)=(a)-1;(i)<(b);(i)++)
#define REP(i, a, b) for (int (i)=(a);(i)>=(b);(i)--)
#define reg(i, x) for (int (i)=head[x];(i);i=e[i].next)
#define clr(a) memset(a,0,sizeof(a))
#define Sort(a, len) sort(a + 1, a + len + 1)
#define Sort2(a, len, cmp) sort(a + 1, a + len + 1, cmp)
#define ass(a, sum) memset(a, sum, sizeof(a))

#define ull unsigned long long
#define ll long long
#define ls ((rt) << 1)
#define rs ((rt) << 1 | 1)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define Pii pair<int, int>

const int N = 100010 ;
const int iinf = INT_MAX/2 ;
const ll linf = LLONG_MAX/2 ;
const int MOD = 1e9+7 ;

inline int read(){
    int X = 0,w = 0 ;
	char ch = 0;
    while(!isdigit(ch)) {w |= ch == '-';ch = getchar();}
    while(isdigit(ch)) X = (X<<3) + (X<<1) + (ch ^ 48),ch = getchar();
    return w ? -X : X;
}

void write(int x){
     if(x < 0) putchar('-'),x = -x;
     if(x > 9) write(x / 10);
     putchar(x%10 + '0');
}

void print(int x) {
	cout << x << endl ;
	exit(0) ;
}

void douout(double x){
	 printf("%lf\n", x + 0.0000000001) ;
}

string s ;

int main(){
	cin >> s ;
	for (int i = 0; i < s.size(); i++) 
	if (s[i] == '1') s[i] = '9' ; 
	else if (s[i] == '9') s[i] = '1' ;
	cout << s << endl ;
}

/*
写代码时请注意：
	1.是否要开Long Long？数组边界处理好了么？
	2.特殊情况处理好了么？
	3.做一些总比不做好。
	4.最大值和最小值问题可不可以用二分答案？
	5.有没有贪心策略？否则能不能dp？
	6.实数精度有没有处理？
*/

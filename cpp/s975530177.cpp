#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 25, M = 1e6 + 25, oo = 1e9+7, mxmsk = 1 << 16;
const long long OO = 1e18+25;
#define par pair<pair<int,int>, int>
#define f first
#define s second
    
int x,y,w,h;

int main()
{
    scanf("%d%d%d%d",&w,&h,&x,&y);
    printf("%.20lf %d",(1.0*w*h/2), (w&1==0&&w/2==x&&h&1==0&&h/2==y));
    return 0;
}
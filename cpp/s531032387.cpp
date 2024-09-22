#include <bits/stdc++.h>
using namespace std;
 
int main(){
int w,h,x,y;
cin >> w >> h >> x >> y;
double mx = ((h*(w-x)) < (h*x)) ? h*(w-x) : h*x;
double my = ((w*(h-y)) < (w*y)) ? w*(h-y) : w*y;
double di = (my < mx) ? mx : my;
if(mx == my) printf("%lf 1\n",di);
else printf("%lf 0\n",di);
return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  double w,h,x,y;
  
  cin >> w >> h >> x >> y;
  
  double m,a,b;
  int c=0;
	a=(w-x)*h;
  	b=w*(h-y);
  	m=min(a,b);
  	if(a==b) c=1;
  	cout << m << " " << c << endl;
  return 0;
}
#inlcude <bits.stdc++.h>
using namespace std;
int main() {
  int a, b, x, y;
  cin>>a>>b>>x>>y;
  int ans = 0;
  if(! a % 2 && ! b % 2) 
    	if(x == a / 2 && y == b / 2)
         	ans = 1;
 	cout<<(double)(a * b) / 2<<" "<<ans<<endl;
}
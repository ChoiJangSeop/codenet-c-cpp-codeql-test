#include <bits/stdc++.h>
using namespace std;
 
long long gcd(long long a,long long b){
  long long c=max(a,b);
  long long d=min(a,b);
  long long e=c%d;
  if(e==0)return d;
  else{
    return gcd(d,e);
  }
}
 
int main() {
  long long x,y;
cin >> x>>y;
cout << gcd(x,y)<< endl;
}

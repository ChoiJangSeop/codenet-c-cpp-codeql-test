#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
typedef long long ll;

int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return (a*b)/gcd(a,b);}
char chlit(char c){return c+32;}
char chbig(char c){return c-32;}

int main(){
  int a,b;cin >> a >> b;
  cout << gcd(a,b) << endl;
  return 0;
}


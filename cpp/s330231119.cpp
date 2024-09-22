#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
  if(b == 0) return a;
  return gcd(b, a%b);
}

int main()
{
  ll a, b;

  while(cin>>a>>b && a+b){
    cout << gcd(a, b) << endl;
  }

  return 0;
}
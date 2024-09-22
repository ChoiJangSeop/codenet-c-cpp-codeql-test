#include <iostream>
using namespace std;


typedef long long ll;

ll fact(ll n)
{
  ll sum=1;
  for(ll i=1; i<=n; i++)
    sum*=i;
  return sum;
}

ll size(ll n)
{
  return fact(n)/(2*fact(n-2));
}

int main()
{
    long long n;
    cin >> n;
    long long a[n], b[size(n)], i, j, k=0;
    
    for(i=0; i<n; i++)
      cin >> a[i];
    if(n<3){
      for(i=0; i<n; i++)
      cout << a[i] << endl;
      return 0;
      
    }
    for(i=0; i<n-1; i++)
      for(j=i+1; j<n; j++)
        b[k++]=a[i]>a[j]? a[i] :a[j];
    for(i=0; i<size(n); i++)
      cout << b[i] << endl;
      
    return 0;
    
    
}
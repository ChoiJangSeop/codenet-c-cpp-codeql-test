#include <iostream>
using namespace std;

int main(){

  int n;cin >> n;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];
  for(int i=0; i<n-1; i++) cout << a[n-i-1] << " ";
  cout << a[0] << endl;


}
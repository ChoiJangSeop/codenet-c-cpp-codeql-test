#include <iostream>
using namespace std;
int main(){
  int n, a[100];
  cin >> n;
  for(int i=0; i<n; i++){
   cin >> a[i];
  }
  for(int l=0; l<n; l++){
    cout << a[n-1-l];
  if(l == n-1) break;
  cout << ' ';  
  }
  cout << endl;
  return 0;
}
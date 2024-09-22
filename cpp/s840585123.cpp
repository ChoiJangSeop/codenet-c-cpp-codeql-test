#include <iostream>
using namespace std;

int main(){

  const int MAX_N=100;
  int n;
  int a[MAX_N];

  cin >> n;
  for(int i=n-1; i>=0; i--){
    cin >> a[i];
  }

  for(int i=0; i<n; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}


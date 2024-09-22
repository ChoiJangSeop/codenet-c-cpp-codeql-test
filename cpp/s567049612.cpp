#include <iostream>
using namespace std;

int main(){

  int n;
  int *a;

  cin >> n;
  for(int i=n-1; i>=0; i--){
    cin >> a[i];
  }

  for(int i=0; i<n; i++){
    cout << " " << a[i];
  }
  cout << endl;
}


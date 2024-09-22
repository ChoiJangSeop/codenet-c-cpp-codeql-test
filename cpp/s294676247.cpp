#include<iostream>
#define PI 3.141592653589
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[100];
  for(int i = 0; i < n; i++){
    cin>>a[i];
  }

  for(int i=0; i<n; i++){
    if (i!=0){cout << " ";}
    cout << a[n-i-l];
  }
  cout << "\n";
  
  return 0;
}
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
  int n;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  for (i = n -1; i >= 0; i--) {
    cout << x[i];
    if (i != 0) {
      cout << ' ';
    }
  }
  cout << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i = 0; i < n; i++){
   cin >> a[i];
   b[i] = a[i];
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  for(int i = 0; i < n; i++){
    if(a[0] == b[i]) cout << a[1] << endl;
    else{
      cout << a[0] << endl;
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[200010];
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  int max = 0, max_ind, max2 = 0;
  for (int i = 0; i < n; i++){
    if (a[i] > max){
      max = a[i];
      max_ind = i;
    }else if (a[i] > max2){
      max2 = a[i];
    }
  }
  for (int i = 0; i < n; i++){
    if (i == max_ind) cout << max2 << endl;
    else cout << max << endl;
  }
}
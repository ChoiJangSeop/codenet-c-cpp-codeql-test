#include <bits/stdc++.h>
using namespace std;

int r_max(int x,vector<int> v){
  int ans;
  int y = v.at(x);
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  if(v.at(0) == y){
    ans = v.at(1);
  }
  else{
    ans = v.at(0);
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> a (n);
  for(int i=0; i<n; i++){
    cin >> a.at(i);
  }
  for(int i=0; i<n; i++){
    cout << r_max(i,a) << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> data(n);
  for(int i = 0; i < n; i++){
    cin >> data.at(i);
  }
  for(int i = 1; i < n + 1; i++){
    if(i == n){
      cout << data.at(n - i) << endl;
    }
    else{ 
      cout << data.at(n - i) << " ";
    }
  }
}


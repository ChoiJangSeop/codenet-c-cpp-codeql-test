#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v(N);
  for(int i=0;i<N;i++){
    cin >> v[i];
  }
  for(int i=N-1;i>=0;i--){
    cout << v[i];
    if(i != 0)
      cout << " ";
  }
  return 0;
}
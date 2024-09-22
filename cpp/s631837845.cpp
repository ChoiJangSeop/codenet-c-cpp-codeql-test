#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int panda[n];
  
  for(int i=0; i<n; i++){
    cin >> panda[i];
    
  }
  for(int j=n; j>0; j--){
    cout << panda[j-1];
    if(j!=1){
      cout << ' ';
    }
  }
}


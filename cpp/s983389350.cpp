#include <iostream>
#include <string>
using namespace std;

int main(){
  char n[10000];
  cin >> n;
  for(int i = 0;i < strlen(n);i++){
    if(n[i] == '1'){
      cout << 9 ;
    }
    else{
      cout << 1;
    }
  }
  cout << endl;
  return 0;
}

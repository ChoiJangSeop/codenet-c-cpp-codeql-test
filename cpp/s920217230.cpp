#include <iostream>
using namespace std;

int main(){
  int num1;
  cin >> num1;
  switch(num1){
      case 000:
      num1 = 999;
      break;
      
      case 009:
      num1 = 990;
      break;
      
      case 090:
      num1 = 909;
      break;
      
      case 099:
      num1 = 900;
      break;
      
      case 900:
      num1 = 099;
      break;
      
      case 909:
      num1 = 090;
      break;
      
      case 990:
      num1 = 009;
      break;
      
      case 999:
      num1 = 000;
      break;      
  }
  
  cout << num1 << endl;
  return 0;
}
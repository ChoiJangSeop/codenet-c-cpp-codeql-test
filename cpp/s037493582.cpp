#include <iostream>
using namespace std;

int main()
{
  char a[3];
  for(int i = 0; i < 3; i++){
    cin >> a[i];
    if(a[i] == '1'){
      a[i] = '9';
    }
    else{
      a[i] = '1';
    }
  }
  cout << a[0] << a[1] << a[2] << endl;
}
#include<iostream>
using namespace std;
int main(void)
{
  char num[3];
  for(int i=0;i<3;i++){
    cin >> num[i];
  }
  
  for(int i=0;i<3;i++){
    if(num[i]=='1'){
      num[i] = '9';
    }
    else{
      num[i] = '1';
    }
    cout << num[i];
  }
  return 0;
}

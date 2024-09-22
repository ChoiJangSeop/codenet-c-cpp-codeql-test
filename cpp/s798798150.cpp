#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,ans=0,multiple=1;
  cin>>N;
  for(int i=0;i<3;i++){
    if(N%10==1){
      ans +=multiple*9;
      N/=10;
      multiple*=10;
    }
    else{
      ans +=multiple*1;
      N/=10;
      multiple*=10;
    }
  }
  cout <<ans;  
}
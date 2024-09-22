#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>moji(3);
  for(int i=0;i<3;i++){
  cin>>moji.at(i);
  }
  for(int i=0;i<3;i++){
    if(moji.at(i)==1){
      moji.at(i)=9;
    }
    if(moji.at(i)==9){
      moji.at(i)=1;
    }
  }
  cout<<moji(3)<<endl;
    
}

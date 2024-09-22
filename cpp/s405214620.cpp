#include <string>
#include <iostream>

using namespace std;

string S;
char r[10];
int pos;

int main(){
  cin>>S;
  for(int i=0;i<S.length();i++){
    if(S[i]=='B'){
      if(pos>0) pos--;
      continue;
    }
    r[pos]=S[i];
    pos++;
  }
  for(int i=0;i<pos;i++) cout<<r[i];
  cout<<"\n";
  return 0;
}
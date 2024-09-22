#include<iostream>
#include<string>
using namespace std;
int main(){
  string command="";
  string ans="";
  int number=0;
  cin>>command;
  for(int i=0;i<command.size();i++){
    if(command.substr(i,1)=="0")ans.append("0");
    if(command.substr(i,1)=="1")ans.append("1");
    if(command.substr(i,1)=="B")ans.pop_back();
  }
  cout<<ans<<endl;
}
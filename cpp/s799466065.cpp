#include<iostream>
#include<string>
using namespace std;
int main(){
  string command="";
  string ans="";
  int number=0;
  cin>>command;
  for(int i=0;i<command.size();i++)
    switch(command[i]){
        case("0"):ans.append("0");break;
        case("1"):ans.append("1");break;
        case("B"):ans.pop_back();
    }
  cout<<ans<<endl;
}
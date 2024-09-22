#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<set>
#include<vector>
#include<iomanip>
#include<numeric>
using namespace std;

int main(){
  string s;cin>>s;
  int l=s.length();
  vector<string> t(l);
  for(int i=0;i<l;i++)t.at(i)=s[i];

  vector<int> k;
  for(int i=0;i<l;i++){
    if(t.at(i)=="0")k.push_back(0);
    if(t.at(i)=="1")k.push_back(1);
    if(t.at(i)=="B"&&k.size()!=0)k.pop_back();
    for(int i=0;i<k.size();i++)cout<<k.at(i);
    cout<<"a"<<endl;
  }
  for(int i=0;i<k.size();i++)cout<<k.at(i);
  cout<<endl;
  cout<<k.size()<<endl;

  return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
    int i=0;
    string n;
    cin >>n;
for(; i<3; i++){
    if(n[i]=='1') n[i]='9';
     else if(n[i]=='9') n[i]='1';
}
cout <<n <<endl;
      return 0;
}
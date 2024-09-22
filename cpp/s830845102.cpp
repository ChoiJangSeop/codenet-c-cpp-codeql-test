#include<iostream>
#include<string>
using namespace std;

int main(){
  int x, y;

  while(1){
    cin >> x >> y;
    cout << to_string(x + y).size() << endl;
    if(cin.eof()) {break;}
  }

  return 0;
}
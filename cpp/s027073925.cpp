#include <iostream>
#include <vector>

using namespace std;

int main(){
  string s;
  cin >> s;

  vector<int> tmp(100,-1);
  int head = 0;

  for(int i = 0;i < s.length();i++){
    switch(s[i]){
    case 'B':
      tmp[head] = -1;
      head = std::max(0, head - 1);
      break;
    case '0':
      tmp[head] = 0;
      head++;
      break;
    case '1':
      tmp[head] = 1;
      head++;
      break;
    default:
      std::cerr << "unkown char \"" << s[i] << "\"" << std::endl;
      break;
    }
  }

  for(int i = 0;tmp[i] != -1;i++){
    std::cout << tmp[i];
  }
  std::cout << std::endl;
}

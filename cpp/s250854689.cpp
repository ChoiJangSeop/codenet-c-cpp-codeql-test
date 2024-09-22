#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  if(n==111){n=999;}
  else if(n==119){n=991;}
  else if(n==191){n=919;}
  else if(n==911){n=199;}
  else if(n==199){n=911;}
  else if(n==919){n=191;}
  else if(n==991){n=119;}
  else{n=111;}
  
  cout << n;
  
  return 0;
}
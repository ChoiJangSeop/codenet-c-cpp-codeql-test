#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(i = n%10; i != 0;n /= 10,  i = n%10)
    cout << (i == 1?9:1);
  cout << endl;
}
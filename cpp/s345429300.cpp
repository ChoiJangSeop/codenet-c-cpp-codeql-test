#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<iomanip> 



#define REP(i,n) for (int i = 0; (i) < (n); ++ (i))

using namespace std;
string a;

int main(){
  cin >> a;
  REP(i,3){
    if(a[i] = '1') a[i]='9';
    else if (a[i] = '9') a[i]='1';
  }
  cout << a << endl;
  return 0;
}

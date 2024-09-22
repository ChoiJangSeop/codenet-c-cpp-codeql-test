#include "bits/stdc++.h"
#define rep(i,a,n) for(int i = (a);i < (n);i++)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main(){
	string s;
  	cin >> s;
  
 	rep(i,0,s.size()){
      if(s[i] == '1'){
        cout << 9;
      }
      else{
        cout << 1;
      }
    }
  
  	cout << endl;
	return 0;
}
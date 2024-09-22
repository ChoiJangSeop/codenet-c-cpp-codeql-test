#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  long long a,b,sum;
  int cnt;
  while(cin >> a >> b){
    sum = a + b;
    cnt = 0;
    while(sum>0){
      sum /= 10;
      cnt++;
    }
    cout << cnt << endl;
  }
}
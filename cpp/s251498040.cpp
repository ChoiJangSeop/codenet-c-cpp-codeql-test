#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
  int num[2], ct1=0;
  queue<int> q;
  REP(j,3) {
    REP(i,2) scanf("%d", &num[i]);
    REP(i,2){
      while(num[i] != 0) {
        num[i] /= 10;
        ct1++;
      }
    }
    q.push(ct1);
    ct1 = 0;
  }
  REP(i,3) {
    printf("%d\n", q.front());
    q.pop();
  }

  return 0;
}
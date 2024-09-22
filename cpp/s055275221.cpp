#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  while(cin >> a >> b) {
    int sum, count;
    count = 0;
    sum = a + b;
    for(int i=sum;i>0;i = i/10){
      count++;
    }
    cout << count << endl;
  }
}

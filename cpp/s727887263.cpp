#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n){
    cin >> a[i];
  }
  priority_queue<int> q;
  rep(i,n){
    rep(j,n){
      if(i!=j)
        q.push(a[j]);
      	cout << q.top() << endl;
      	while(!q.empty){
          q.pop();
        }
    }
  }
}
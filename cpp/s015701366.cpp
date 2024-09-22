#include<bits/stdc++.h>
using namespace std;

int main(){
  	int n;
  	cin >> n;
  	stack<int> v;
  	while(n!=0){
      	v.push(n%10==9?1:
               n%10==1?9:n%10);
      	n/=10;
    }
  	while(!v.empty()){
      	cout << v.top();
    	v.pop();
    }
  	return 0;
}
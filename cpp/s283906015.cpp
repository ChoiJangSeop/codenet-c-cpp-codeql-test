#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for( int i = 0 ; i < n ; i++ )
typedef long long ll ;
int main() {
	string S ;
	cin >> S ;
	int n = S.size() ;
    stack<char> que ;
	rep(i,n){
		if( S[i] == '0' || S[i] == '1' ){
		que.push(S[i]) ;
        }
        else{
        if(que.empty()) continue ;
        else que.pop() ;
        }
    }
    cout << que.size() << endl;
    rep(i,n) {
    cout << que.top() << " "; // 先頭要素を参照する
    que.pop(); // 先頭要素を削除
  }
}
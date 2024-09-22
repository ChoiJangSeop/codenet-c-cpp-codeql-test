#include <bits/stdc++.h>
using namespace std;
#define repr(i,k,n) for(int i = (k); i < (n); i++)
#define rep(i,n) repr(i,0,n)
#define ALL(a) begin(a),end(a)
const int MOD = 1000000007;
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
  }
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, A, B = 1, C = 0,j;
    cin >> N;
    rep(i, N){
        cin >> A;
        if(A >= B){
            C = B;
            B = A;
            j = i;
        } else if(A >= C){
            C = A;
        }
    }
    rep(i, N){
        cout << (i == j?C:B) << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define inf 1001001001
typedef pair<int,int> P;
#define mod 1000000007

int main(){
   string s;
   cin >> s;
   rep(i,3){
       if(s[i]=='1') s[i]='9';
       else if(s[i]=='9') s[i]='1';
   }
   cout << s << endl;
   return 0;
}

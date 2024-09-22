#include <bits/stdc++.h>
using namespace std;
#define int lint
typedef long long lint;
typedef pair<int,int> P;
const int    INF=(int)1e9;
const int    MOD=(int)1e9+7;
const double EPS=(double)1e-10;
struct Accelerate_Cin{
    Accelerate_Cin(){
        cin.tie(0);ios::sync_with_stdio(0);cout<<fixed<<setprecision(20);
    };
};



signed main(){
  string s;cin>>s;

  string ans="";
  for(int t=0;t<s.size();t++){
    if(s[t]=='B'){
      if(ans.size()==0)continue;
      ans=ans.substr(0,ans.size()-1);
    }else{
      ans+=s[t];
    }
  }

  cout<<ans<<endl;
  return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  double W,H,x,y;
  double m;
  int ans;
  cin>>W>>H>>x>>y;
  ans=0;
  m=max(min(x*H,(W-x)*H),min(W*y,W*(H-y)));
  ans=(2*x==W)*(2*y==H);
  /*if(min(x*H,(W-x)*H)>min(W*y,W*(H-y))){
    m=min(x*H,(W-x)*H);
    ans=(2*y==H);
  }
  else if(min(x*H,(W-x)*H)<min(W*y,W*(H-y))){
    m=min(W*y,W*(H-y));
    ans=(2*x==W);
  }
  else{
    m=min(x*H,(W-x)*H);
    if(2*x==W||2*y==H)ans=1;
  }
  //m=W*H-m;
  if(x==(W-x))*/
  cout<<m<<" "<<ans<<endl;
}


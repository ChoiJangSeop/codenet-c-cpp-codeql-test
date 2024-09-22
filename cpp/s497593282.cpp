#include<bits/stdc++.h>
using namespace std;
int main(){
int W,H,x,y;
cin>>W>>H>>x>>y;
if(W%x==0&&H%y!=0)cout<<fixed<<setprecision(6)<<x*H*1.0<<" "<<0;
else if(H%y==0&&W%x!=0) cout<<fixed<<setprecision(6)<<y*W*1.0<<" "<<0;
else cout<<fixed<<setprecision(6)<<x*H*1.0<<" "<<1;
return 0;
}

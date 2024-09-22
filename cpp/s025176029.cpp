#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  long double W,H,x,y,s1,s2,ans;
  int b=0;
  cin>>W>>H>>x>>y;
  
  if(x<=W/2&&y<=H/2){
    s1=W*y;	s2=H*x;
    if(s1<s2){ans=s2;}
    else{ans=s1;}
    if(s1==s2){b=1;}
  }else if(x>W/2&&y<=H/2){
    s1=W*y;	s2=H*(W-x);
    if(s1<s2){ans=s2;}
    else{ans=s1;}
    if(s1==s2){b=1;}
  }else if(x<=W/2&&y>H/2){
    s1=W*(H-y);	s2=H*x;
    if(s1<s2){ans=s2;}
    else{ans=s1;}
    if(s1==s2){b=1;}
  }else{
    s1=W*(H-y);	s2=H*(W-x);
    if(s1<s2){ans=s2;}
    else{ans=s1;}
    if(s1==s2){b=1;}
  }
  
  if(x==W||y==H||x==0||y==0){
    ans=W*H/2; b=0;
  }
  if(H*x/W==y||y==-H*x/W+H){
    ans=W*H/2; b=0;
    if(x==W/2&&y==H/2){b=1;}
  }
  
  cout<<fixed<<setprecision(9)<<ans<<" "<<b;
}
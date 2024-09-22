#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
#define BEGIN ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define END return EXIT_SUCCESS
#define rep(I,N) for(auto I=0;I<(N);++I)
#define up(I,A,B) for(auto I=(A);I<=(B);++I)
#define dw(I,A,B) for(auto I=(A);I>=(B);--I)
#define all(C) (C).begin(),(C).end()
#define rall(C) (C).rbegin(),(C).rend()
#define ft first
#define sd second
#define mp make_pair
#define mt make_tuple
#define pf push_front
#define pb push_back
#define pt pop_front
#define pk pop_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define rs resize
template<class T> T count_bit(T p){
  if(typeid(p)==typeid(int))return __builtin_popcount(p);
  else if(typeid(p)==typeid(long))return __builtin_popcountl(p);
  else return __builtin_popcountll(p);
}
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T>inline void                                      in(T &p){cin>>p;}
template<class T1,class T2>inline void                            in(T1 &p1,T2 &p2){cin>>p1>>p2;}
template<class T1,class T2,class T3>inline void                   in(T1 &p1,T2 &p2,T3 &p3){cin>>p1>>p2>>p3;}
template<class T1,class T2,class T3,class T4>inline void          in(T1 &p1,T2 &p2,T3 &p3,T4 &p4){cin>>p1>>p2>>p3>>p4;}
template<class T1,class T2,class T3,class T4,class T5>inline void in(T1 &p1,T2 &p2,T3 &p3,T4 &p4,T5 &p5){cin>>p1>>p2>>p3>>p4>>p5;}
template<class T>inline void                                      ins(T &p){for_each(all(p),in<decltype(p[0])>);}
template<class T>inline void                             out(T p){cout<<p<<endl;}
template<class T1,class T2>inline void                   out(T1 p1,T2 p2){cout<<p1<<" "<<p2<<endl;}
template<class T1,class T2,class T3>inline void          out(T1 p1,T2 p2,T3 p3){cout<<p1<<" "<<p2<<" "<<p3<<endl;}
template<class T1,class T2,class T3,class T4>inline void out(T1 p1,T2 p2,T3 p3,T4 p4){cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<endl;}
inline                                              void out(double p){printf("%.10f\n",p);}
template<class T>inline                             void outs(T p){for_each(all(p),out<decltype(p[0])>);}

inline void solve(void){
  long W,H,X,Y;
  double EPS=1e-10;
  in(W,H,X,Y);
  if((X==0L&&Y==0L)||(X==0L&&Y==H)||(X==W&&Y==0L)||(X==W&&Y==W)){
    printf("%.10f 1\n",0.5*W*H);
    return;
  }
  else if(X==0L||X==W||Y==0L||Y==H){
    printf("%ld 0\n",max(min(W*Y,W*(H-Y)),min(X*H,(W-X)*H)));
    return;
  }
  if(X>W/2L&&Y>H/2L)printf("%.10f ",0.5*(W-X-Y+H)*(H+W-X-Y));
  else if(X<W/2L&&Y<H/2L)printf("%.10f ",0.5*(X+Y)*(X+Y));
  else if(X>W/2L&&Y<H/2L)printf("%.10f ",0.5*(W-X+Y)*(W+Y-X));
  else if(X<W/2L&&Y>H/2L)printf("%.10f ",0.5*(H+X-Y)*(H-Y+X));
  else printf("%ld ",max(min(W*Y,W*(H-Y)),min(X*H,(W-X)*H)));
  if((abs(X-(double)W/2.0)<EPS&&abs(Y-(double)H/2.0)<EPS))puts("1");
  else puts("0");
}
int main(int argc,char**argv){
  BEGIN;
  solve();
  END;
}

#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;

#define rep(i,x) for(int i=0;i<x;i++)
#define re(i,x,y) for(int i=x;i<y;i++)

long long INF=1e9;
const long long mod=2019;
#define ll long long

int main(){
  int N;
  cin>>N;
  vector<int>a(N);
  vector<int>sum1(N),sum2(N);
  rep(i,N){
    cin>>a[i];
  }
  sum1[0]=a[0];
  sum2[N-1]=a[N-1];
  for(int i=1;i<N;i++){
    if(sum1[i-1]<a[i]){
      sum1[i]=a[i];
    }
    else{
      sum1[i]=sum1[i-1];
    }
  }
  for(int i=N-1;i>=1;i--){
    if(sum2[i]<a[i-1]){
      sum2[i-1]=a[i-1];
    }
    else{
      sum2[i-1]=sum2[i];
    }
  }
  cout<<sum2[1]<<endl;
  for(int i=1;i<N-1;i++){
    cout<<max(sum1[i-1],sum2[i+1])<<endl;
  }
  cout<<sum1[N-2]<<endl;
  return 0;
}
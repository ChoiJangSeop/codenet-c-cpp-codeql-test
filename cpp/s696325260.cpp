#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <functional>
#include <stack>
#include <iomanip>
#include <limits>
using namespace std;
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;
using Graph=vector<vector<int>>;

using edge= struct{int to;ll cost;};


template<class t,class u> void chmax(t&a,u b){if(a<b)a=b;}
template<class t,class u> void chmin(t&a,u b){if(b<a)a=b;}

typedef priority_queue<ll> PQ_HIGH;
typedef priority_queue<ll,VL,greater<ll>> PQ_LOW;//昇順

//A 65
//a 97
//pairの比較関数(昇順)
bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}
//降順
bool compare_by_b_high(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
  int N;cin>>N;
  VI a(N);
  PQ_HIGH data;
  REP(i,N){
    cin>>a[i];
    data.push(a[i]);
  }
  for(int i=0;i<N;i++){
    if(data.top()!=a[i]){
      cout<<data.top()<<endl;
    }else{
      int tmp=data.top();
      data.pop();
      cout<<data.top()<<endl;
      data.push(tmp);
    }
  }
}
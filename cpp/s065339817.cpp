#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <cmath>
#include <ios>
#include <ctype.h>
#include <stack>
#include <istream>
#include <stdio.h>
#include <map>
#include <set>
#include <queue>
#include <unordered_map>
#include <functional>
#include <bitset>
#include <list>
#include <deque>
#include <time.h>
#include <random>
#include <iomanip>
#include <fstream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define REP(i,a,b) for (int i = a; i < (b); ++i)
#define all(x) (x).begin(),(x).end()
#define pint pair<int,int>
#define SEG_LEN (1 << 18)
const int INF = 1000000007;
const long double EPS = 1e-15;
const long double PI = acos(-1);
typedef long long ll;
using namespace std;
using Graph = vector<vector<int>>;
using Graph_weighted = vector<vector<pair<int,int>>>;
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a,b); }
ll ceil(const ll a, const ll b) { return (a + b - 1) / b; }
class segment_tree_Sum{
  private:
    vector<long long>seg;
    int seg_size = SEG_LEN * 2;
  public:
    segment_tree_Sum(){
      seg.resize(seg_size);
    }
    void update(int ind,int n){
      ind += SEG_LEN;
      seg[ind] = n;
      while(true){
        ind /= 2;
        if(ind == 0)break;
        seg[ind] = seg[ind * 2] + seg[ind * 2 + 1];
      }
    }
    long long Sum(int l,int r){
      l += SEG_LEN;
      r += SEG_LEN + 1;
      long long ans = 0;
      while(l < r){
        if(l % 2 == 1){
          ans += seg[l];
          l++;
        }
        if(l >= r)break;
        l /= 2;
        if(r % 2 == 1){
          ans += seg[r - 1];
          r--;
        }
        r /= 2;
      }
      return ans;
    }
}; 
class segment_tree_Min{
  private:
    vector<long long>seg;
    int seg_size = SEG_LEN * 2;
  public:
    segment_tree_Min(){
      seg.resize(seg_size);
      for(int i = 0; i < seg_size; i++)seg[i] = -INF;
    }
    void update(int ind,int n){
      ind += SEG_LEN;
      seg[ind] = n;
      while(true){
        ind /= 2;
        if(ind == 0)break;
        seg[ind] = min(seg[ind * 2],seg[ind * 2 + 1]);
      }
    }
    long long Min(int l,int r){
      l += SEG_LEN;
      r += SEG_LEN + 1;
      long long ans = -INF;
      while(l < r){
        if(l % 2 == 1){
          ans = min(seg[l],ans);
          l++;
        }
        if(l >= r)break;
        l /= 2;
        if(r % 2 == 1){
          ans = min(seg[r - 1],ans);
          r--;
        }
        r /= 2;
      }
      return ans;
    }
}; 
int main(){
  int n;
  cin >> n;
  segment_tree_Min seg;
  rep(i,n){
    int tmp;
    cin >> tmp;
    seg.update(i,tmp);
  }
  rep(i,n){
    if(i == 0){
      cout << seg.Min(1,n - 1) << endl;
    }
    if(i == n - 1){
      cout << seg.Min(0,n - 2) << endl;
    }
    cout << min(seg.Min(0,i - 1),seg.Min(i + 1,n - 1)) << endl;
  }
  return 0;
}

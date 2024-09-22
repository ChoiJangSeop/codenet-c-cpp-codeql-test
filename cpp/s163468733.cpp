#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <utility>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include <stack>
#include <queue>
#include <list>
#include <map>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

#define MAX(x,y) ( (x) > (y) ? (x) : (y) )
#define MIN(x, y) ( (x) < (y) ? (x) : (y) )
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define IVFOR(p,a) for(vector<int>::iterator p = (a).begin(); p!=(a).end(); p++)
#define ILFOR(p,a) for(list<int>::iterator p = (a).begin(); p!=(a).end(); p++)
#define ALL(a)  (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define CHECK(x)  cout << #x << " = " << (x) << endl
#define FINA(y) cout << (y) << endl

int main(){

  string str;
  stack<int> S;
  int n;
  S.push(100);

  cin >> str;
  
  REP(i,str.size()){
    if(str[i] == '0')
      S.push(0);
    else if(str[i] == '1')
      S.push(1);
    else if(S.top() == 100)
      continue;
    else
      S.pop();
  }	
  //    cout << S.top() << endl;
  
  int size;
  size = S.size() - 1;
  //  CHECK(size);
  int ans[size];
  //  CHECK(S.top());
  
  FOR(i,0,size){
    ans[i] = S.top();
    //  CHECK(ans[i]);
    S.pop();
  }
  for(int i = size -1; i >=0; i--){
    cout << ans[i];
  }
  cout << endl;
 
 return 0;
}

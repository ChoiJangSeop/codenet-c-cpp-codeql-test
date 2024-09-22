#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  long long N;
  cin >> N;

  vector<long long> a(N);
  vector<int > b(N,0);

  long long  amax_1 = 0;
  long long  amax_2 = 0;
  for(long long i =0; i <N; i++){
    cin >> a[i] ;
    if(a[i] > amax_1){
      amax_1 = a[i];
    }
    if(a[i] > amax_2 && a[i] < amax_1)amax_2 = a[i];
  }

  int cnt =0;
  for(long long i =0; i <N; i++){
    if(a[i] == amax_1){
      b[i] = 1;
      cnt++;
    }
    if(a[i] == amax_2)b[i] = 2;
  }

  for(long long i =0; i <N; i++){
    if(cnt > 1)cout << amax_1 << endl;
    else{
      if(amax_1 == a[i])cout << amax_2 << endl;
      else cout << amax_1 << endl;
    }
  }
}

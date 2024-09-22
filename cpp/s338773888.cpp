#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v.at(i);
  }
 
  vector<int> a((N-1)/2+1);
  for (int i = 0; i < (N-1)/2+1; i++) {
    a.at(i)=v.at(2*i);
  }
  sort(a.begin(),a.end());
  pair<int ,int> A;
  
  int d=1;
  for (int i = 0; i < a.size()-1; i++) {
    if(a.at(i)==a.at(i+1)){

      d++;
    }
    else{
      if(A.second<d){ 
        A.second=d;
        A.first=a.at(i);
      }
      else{
        
        d=1;
      }
    }
  }
  if(A.second<d){ 
    A.second=d;
    A.first=a.at((N-1)/2);
  }
  vector<int> b(N/2);
  for (int i = 0; i < N/2; i++) {
    b.at(i)=v.at(2*i+1);
  }
  sort(b.begin(),b.end());
  pair<int ,int> B;
  
  int f=1;
  for (int i = 0; i < b.size()-1; i++) {
    if(b.at(i)==b.at(i+1)){

      f++;
    }
    else{
      if(B.second<f&&A.first!=b.at(i)){ 
        B.second=f;
        B.first=b.at(i);
      }
      else{
        
        f=1;
      }
    }
  }
  if(B.second<f&&A.first!=b.at(N/2-1)){ 
    B.second=f;
   
  }
   
    cout<<N-A.second-B.second<<endl;
  
}





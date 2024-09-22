#include <iostream>
#include <iomanip>
#include <string>

using namespace std;  //このネームスペースを使う

int main(){
  int N ;
  int i,j;
  int max;
  int max2;

  cin >> N ;
 
  int A[N];
  int comp;

  for(i=0;i<N;i++){
    cin >> A[i] ;
  }

  max=0;
  for(i=0;i<N;i++){
    if(max < A[i]){
      max  = A[i];
    }
  }

  max2=0;
  j=0;
  for(i=0;i<N;i++){
    if(max == A[i]){
      j++;
    }

    if(max2 < A[i] && max != A[i]){
      max2 =A[i];
    }
  }

  if(j >= 2){
    max2 = max;
  }

  if(max == max2){
    for(i=0;i<N;i++){
      cout << max << endl;
    }
  }
  else{
    for(i=0;i<N;i++){
      if(A[i]==max){
        cout << max2 << endl;
      }
      else{
        cout << max << endl;
      }
    }
  }

  return 0;
}


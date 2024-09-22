#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  long long int N=0;
  long long int A[200000]={0};
  long long int B[200000]={0};
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>A[i];
    B[i]=A[i];
  }
  sort(B,B+N);
  for(int i=0;i<N;i++){
    if(A[i]==B[N-1]){
      cout<<B[N-2]<<endl;
    }
    else{
      cout<<B[N-1]<<endl;
    }
  }
}
  
  
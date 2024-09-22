#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
 int N;
 cin >>N;
int A[N];
int rA[N];
int lA[N];

for(int i=0; i<N;i++){
int a;
cin>>a;
A[i]=a;
}

if(N==2){
cout<<A[1]<<endl;
cout<<A[0]<<endl;
return 0;
}

rA[0]=A[0];
for(int i=1; i<N;i++){
rA[i]=max(rA[i-1],A[i]);
}

lA[N-1]=A[N-1];
for(int i=N-2; i>=0;i--){
lA[i]=max(lA[i+1],A[i]);
}

cout<<lA[1]<<endl;

for(int i=1; i<N-1;i++){
cout<<max(rA[i-1],lA[i+1])<<endl;
}

cout<<rA[N-1]<<endl;

 return 0;
}
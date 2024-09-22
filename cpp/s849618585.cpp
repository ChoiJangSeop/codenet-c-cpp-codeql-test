#include<iostream>
using namespace std;
int main(){
int n;
cin >>n;
int a[n];
for(int i=0;i<=n;i++){
cin >>a[i];
}
for(int j=n;j>=0;j--){
if(j == 0){
cout<<a[0];
}else{
cout <<a[j]<<" ";
}
}
}

#include <iostream>
using namespace std;

int main(){
 int n,i;
 cin >> n ;
 int a[100];
 for(i=0;i<n;i++) cin >> a[i] ;

 for(i=n;i>=0;i--){
  if(i!=0) cout << a[i] << " " ;
  else cout << a[0]; 
 }
 cout << endl;

 return 0;
}
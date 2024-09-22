#include<iostream>
using namespace std;
 


 
main(){
  int x,y,gcd;
  cin >> x >> y;
if(x < y) swap(x,y);
   
   int z = x%y;
   
  for (int i = 2; i <= y; i++){
  	
  	if(y%i ==0 && z%i == 0){
  		gcd = i;
  	}
  }
  cout << gcd << endl;
  
return 0;
}
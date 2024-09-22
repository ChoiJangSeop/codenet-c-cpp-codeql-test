#include<iostream>                                              
#include<cmath>                                                 
using namespace std;                                            
                                                                
int main(void) {                                                
  int a, b;                                                     
  while (true) {                                                
    cin >> a >> b;                                              
    int ans = log10(a+b)+1;                                     
    cout << ans << endl;                                        
  }                                                             
  return 0;                                                     
}                                                               
                                                                
                     
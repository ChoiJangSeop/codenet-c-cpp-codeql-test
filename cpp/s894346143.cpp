#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
 int a, b, c, count = 0;
 while(cin >> a >> b){
 c = a + b;
 while(c != 0){
  c = c / 10;
  count++;
 }
 cout << count << endl;
 count = 0;
}

 return 0; 
}
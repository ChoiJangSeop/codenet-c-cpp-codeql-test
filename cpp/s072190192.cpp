  1 #include<iostream>
  2 #include<stdio.h>
  3 using namespace std;
  4 int main(){
  5          
  6            int a,b;
  7              while(scanf("%d %d",&a,&b) != EOF){
  8                        int i = 0;
  9                          a = a + b; 
 10                            while(a > 0){
 11                                        a = a / 10;
 12                                            i++;
 13                                                  } 
 14                                                   
 15                                                     cout << i << endl;
 16                                                            
 17                                                        }   
 18 }
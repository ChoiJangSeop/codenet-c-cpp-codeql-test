#include<iostream>
using namespace std;
 
int main(){
   int a[200],b[200],c[200],digit[200];
   int i,imax,j;
   digit = 1;
   i = 0;
   j = 1;
   for(i=0;i<200;i++)digit[i] = 1;
   while(j){
     cin >> a[i] >> b[i];
     c[i] = a[i] + b[i];
     i++;
     if(a[i]==NULL||b[i]==NULL)
       break;
   }
 
   imax = i;
 
   for(i=0;i<imax+1;i++){
     while(c[i]=>10){
       c[i] =/ 10;
       digit[i]++;
     }
   }
 
   for(i=0;i<imax+1;i++)cout << digit[i] << endl;
 
   return 0;
}
#include <stdio.h> 

int main(void) 
{ 
   int x, y, r, tmp; 
   scanf("%d",&x);
   scanf("%d",&y); 

   if(a<b){
   tmp = x; 
   x = y ;
   y = tmp;
   }
    r=x%y;
   
   while(r!=0){ 
   x = y; 
   y = r; 
   r = x % y; 
   }

   printf("%d",y);
   
   return 0 ;
}
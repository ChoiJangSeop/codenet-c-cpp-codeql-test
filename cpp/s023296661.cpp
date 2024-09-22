#include <stdio.h>
int main()
{
int x, y, r, i;
scanf("%d %d",&x ,&y);
if(x >= y){
while0(r>0){
r= x % y;
x=r;
y=x;
}}
else{
while(r>0){
r=y%x;
y=x;
x=r;
}}

for(i=y;i>=1;i--){
if(x % i == 0 && y % i == 0){

printf("%d\n",i);
break;
}
}
return 0;
}
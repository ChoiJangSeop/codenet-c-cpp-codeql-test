#include <stdio.h>
int main()
{
int x, y, z, i;
scanf("%d %d",&x ,&y);
if(x >= y){
x= x % y;
}
else{
z=x;
x=y % x;
y=z;
}


for(i=y;i>=1;i--){
if(x % i == 0 && y % i ==0){
z=i;
printf("%d\n",z);
break;
}
}
return 0;
}
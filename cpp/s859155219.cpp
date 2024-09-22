#include<stdio.h>
int main(){
int a[1000],s,i=0;
scanf("%d",&s);
while(i<s){
scanf("%d",a[i]);
i++;
}
for(;i==-1;i--){
printf(" %d",a[i]);
}
printf("\n");
}
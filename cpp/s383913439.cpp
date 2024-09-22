#include<stdio.h>
int main(){
int a[100],s,i=0;
scanf("%d",&s);
while(i<s){
scanf("%d",&a[i]);
i++;
}
for(;i==0;i--){
printf(" %d",a[i]);
}
printf("\n");
}
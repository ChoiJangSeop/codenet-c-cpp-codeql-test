#include <stdio.h>
int main(){
char a[1000],b[1000];
int n,m;
for(int i=0;i<1000;i++)a[i]=b[i]='\0';
while(scanf("%s",a)!=EOF){
scanf("%s",b);
n=m=0;
while(a[n]!='\0')n++;
while(b[m]!='\0')m++;
printf("%d\n",n+m);
for(int i=0;i<1000;i++)a[i]=b[i]='\0';
}
}
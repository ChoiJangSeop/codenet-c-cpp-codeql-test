#include <cstdio>


int main(){
int i,n;
int c[100];

scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&c[i]);
for(i=n;i>0;i--){
if(i!=n)printf(" ");
printf("%d",c[i-1]);
}
return 0;
}
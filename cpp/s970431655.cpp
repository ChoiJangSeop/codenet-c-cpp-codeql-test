#include <stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int n=a+b;
	int c=0;
	while(n){
		n/=10;
		c++;
	}
	printf("%d",c);
	return 0;
}
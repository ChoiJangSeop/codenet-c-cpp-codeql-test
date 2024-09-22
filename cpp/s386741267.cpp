#include <stdio.h>
int main(void){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		int sum=a+b;
		int digit=1;
		while(sum>=10){
			sum/=10;
			digit++;
		}
		printf("%d\n",digit);
	}
	return 0;
}
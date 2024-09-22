#include<cstdio>

int main(void){
	
	long long a,b,c;
	scanf("%lld%lld",&a,&b);
	while(b!=0){
		a=a%b;
		c=a;
		a=b;
		b=c;
	}
	printf("%lld\n",a);
	
	return 0;
}
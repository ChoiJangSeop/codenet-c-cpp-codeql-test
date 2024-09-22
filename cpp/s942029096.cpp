#include<stdio.h>
int gcd(int x,int y){
	int r,tmp;
	if(x < y){
		tmp=x;
		x=y;
		y=tmp;
	}
	while(y > 0){
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}
int main(){
	int x,y,d;
	scanf("%d%d",&x,&y);
	d=gcd(x,y);
	printf("%d\n",d);
	return 0;
}
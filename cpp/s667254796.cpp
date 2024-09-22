#include<stdio.h>
int main(){
	int x,y,i;
	for(i=0;i<200;i++){
	scanf("%d %d",&x,&y);
	if((x+y) < 10) printf("1\n");
	else if((x+y)<100) printf("2\n");
	else if((x+y)<1000) printf("3\n");
	else if((x+y)<10000) printf("4\n");
	else if((x+y)<100000) printf("5\n");
	else printf("6\n");
	}
	return 0;
}
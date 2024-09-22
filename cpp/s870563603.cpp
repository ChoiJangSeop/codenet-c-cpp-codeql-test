#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int a=0;
	int b=0;
	char c[80];
	scanf("%d %d", &a, &b);
	do{
		sprintf(c, "%d", a+b);
		printf("%d\n", strlen(c));
	}while(scanf("%d %d", &a, &b) != EOF);
	return 0;
}
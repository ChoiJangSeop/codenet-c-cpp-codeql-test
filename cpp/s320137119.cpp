#include <stdio.h>

int ketasu(int num){
	if(num == 0) return 0;
	int i;
	for(i = 1; num != 0; i++){
		num /= 10;
	}
	return i;
}
int main(){
	int a, b;
	while(scanf("%d %d", &a, &b) == EOF){
		printf("%d\n",ketasu(a + b));
	}
	return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int x;
	int y;
	int big;
	int small;
	int tmp;
	scanf("%d%d",&x,&y);
	if(x>y){
		big = x;
		small = y;
	}else{
		big = y;
		small = x;
	}
	while(small != 0){
		tmp = small;
		small = big % small;
		big = tmp;
	}
	printf("%d\n",big)
	return 0;
}
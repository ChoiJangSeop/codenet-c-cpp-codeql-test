#include<stdio.h>
int main(void)
{
	int n,array[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&array[i]);
	}
	for(i=n-1;i>=0;i--){
	printf("%d ",array[i]);
	}
	return 0;
}
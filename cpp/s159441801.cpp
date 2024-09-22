#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;
	int ans;
	
	while (scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		ans = 0;
		
		while (sum){
			ans++;
			sum /= 10;
		}
		
		printf("%d\n", ans);
	}
	
	return (0);
}
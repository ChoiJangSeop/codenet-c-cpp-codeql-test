#include<stdio.h>
#include<math.h>

int main() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		printf("%d\n", ((a + b) / 10) + 1);
	}
}

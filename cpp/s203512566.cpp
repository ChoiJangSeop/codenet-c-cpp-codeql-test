#include <cstdio>

int main() {
	int a, b;
	char temp[100];

	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", sprintf(temp, "%d", a + b));
	}

	return 0;
}
#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int w, h;
	int x, y;
	scanf("%d %d %d %d", &w, &h, &x, &y);

	printf("%lf %d\n", (double)w * (double)h / 2.00000f, x + x == w && y + y == h);
}

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
const long long mod = 1000000007;

int main() {
	int W, H, x, y;
	scanf("%d %d %d %d", &W, &H, &x, &y);
	printf("%f %d", (double)(W)*H / 2.0, (x * 2 == W && y * 2 == H) ? 1 : 0);

	return 0;
}
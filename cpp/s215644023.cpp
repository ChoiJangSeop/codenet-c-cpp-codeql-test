// ConsoleApplication7.cpp : ??????????????? ??¢????????±????????§????????¨????????? ?????????????????????????????????
//

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(int argc, char* argv[])
{
	int i;
	int x, y;
	int z;

	scanf("%d %d", &x, &y);

	if (x > y) {
		z = x % y;
		if (z == 0) {
			printf("%d\n", y);
			return 0;
		}
	}
	else {
		z = y % x;
		y = x;
		if (z == 0) {
			printf("%d\n", x);
			return 0;
		}
	}
	
	int div = z;
	while (div--) {
		if (y % div == 0 && z % div == 0) {
			printf("%d\n", div);
			break;
		}
	}


	return 0;
}
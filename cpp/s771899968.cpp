#include <stdio.h>

int main(int argc, char const *argv[]) {
	char str[101];
	int n, m, k;
	int ans;

	fgets(str, 100, stdin);

	str[0] = str[0] == '1' ? '9' : '1';
	str[1] = str[1] == '1' ? '9' : '1';
	str[2] = str[2] == '1' ? '9' : '1';

	printf("%s\n", str);

	return 0;
}

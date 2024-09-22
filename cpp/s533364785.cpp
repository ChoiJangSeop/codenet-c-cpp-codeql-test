
#include <stdio.h>
#include <errno.h>
int main(int argc, char **argv)
{
unsigned long int x[2];
if (argc > 2) {
int i, c;
argv++;
for (i = 0; i < 2; i++) {
char *t;
x[i] = strtoul(argv[i], &t, 10);
if (errno)
return 1;
if (*t)
return 2;
}
printf("最大公約数 %lu\n最小公倍数 %lu\n", gcd(x[0],x[1]),lcm(x[0],x[1]));
}
return 0;
}

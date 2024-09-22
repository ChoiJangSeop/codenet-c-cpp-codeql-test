#include <stdio.h>
int main(void)
{
    int n, i;
    int a[100];
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n; i >= 2; i--)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[1]);
    return 0;
}

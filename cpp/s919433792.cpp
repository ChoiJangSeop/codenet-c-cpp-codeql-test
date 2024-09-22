#include <stdio.h>

void reverse(int n, int x[]) //数列を逆にする関数
{

    for (int i = 0; i < n / 2; i++)
    {
        int tmp = x[i];
        x[i] = x[n - 1 - i];
        x[n - 1 - i] = tmp;
    }
}

void print(int n, int x[]) //数列を表示する関数
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", x[i]);
    }
    printf("%d\n", x[n - 1]);
}

int main(void)
{
    int n;
    int x[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) //入力した回数だけ入力を繰り返す
    {
        scanf("%d", &x[i]);
    }

    reverse(n, x);
    print(n, x);

    return 0;
}

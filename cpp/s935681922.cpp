#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int array[10000];
    for (int i = 0; i < N; i++){
        scanf(" %d", &array[i]);
    }
    for (int i = N - 1; i >= 0; i--) {
        if (i == N - 1) printf("%d", array[i]);
        else printf(" %d", array[i]);
    }
    printf("\n");
}


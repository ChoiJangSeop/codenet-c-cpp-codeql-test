#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int arr[105];
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = N-1; i >= 0; i--){
        printf("%d", arr[i]);

        if(i == 0){
            printf("\n");
        }else{
            printf(" ");
        }
    }

    return 0;
}


#include <stdio.h>

int main(){
    char str[15];
    char ans[15];
    scanf("%s", str);

    int j = 0;
    for (int i=0; str[i]!='\0'; i++){
        if (str[i] != 'B'){
            ans[j++] = str[i];
            // printf("%d = %c\n", j-1, ans[j-1]);
            if (str[i+1] == 'B'){
                j--;
            }
        }
        else{
            if (j >= 0){
                // printf("%d = null\n", j);
                ans[j] = '\0';
                if (str[i+1] == 'B'){
                    (j == 0) ? j = 0 : j--;
                }
            }
        }
    }
    // 1 0 1 0 1 B B
    // 0 1 2 3 4 
    printf("%s\n", ans);
    
    return 0;
}
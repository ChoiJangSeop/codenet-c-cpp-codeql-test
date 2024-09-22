#include <stdio.h>
#include <vector>
#include <string>

int main(int argc, char* argv[]){
    int n;
    scanf("%d", &n);
    std::vector<int> list = {};
    list.resize(n);
    for(int i = n - 1; 0 <= i; --i){
        int input;
        scanf("%d", &input);
        list[i] = input;
    }
    for(int i = 0; i < list.size(); ++i){
        printf("%d", list[i]);
        if (i + 1 == list.size()){
            printf("\n");
        }else{
            printf(" ");
        }
    }
}

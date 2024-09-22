#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<iostream>

int main(){
    int i, j;
    int a,b,c;
    std::vector<int> avec, bvec;
    for (i = 0; i <= 200; i++){
        scanf("%d %d", &a, &b);
        c = a + b;

        std::string str = std::to_string(c);
        std::cout << str.length() << "\n";

        // for(j = 0; j < 8; j++){
        //     if (c == 0){
        //         printf("1\n");
        //         break;
        //     }
        //     if (c / std::pow(10,j) < 1){
        //         printf("%d\n",j);
        //         break;
        //     }
        // }
        // // avec.push_back(a);
        // // bvec.push_back(a);
    }

    return 0;
}
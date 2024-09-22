#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 15
char s[sz + 2];

int main(){

    int i, j, len;
    int p = 0;

    scanf("%s", s);

        len = strlen(s);

        /*if(len == 1){
            if(s[0] != 'B'){
                puts(s);
                p = 1;
            }
        }
        */

        //if(len > 1){
            for(i = 0; s[i]; i++){
                if(i < len - 1){
                    if(s[i + 1] != 'B' && s[i] != 'B'){
                        putchar(s[i]);
                        p = 1;
                    }
                }else if(i == len - 1){

                    if(s[i] != 'B'){
                        putchar(s[i]);
                        p = 1;
                    }
                }
            }

			printf("\n");

       // }

    return 0;
}

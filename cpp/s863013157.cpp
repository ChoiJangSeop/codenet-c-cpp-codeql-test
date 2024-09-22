#include <stdio.h>

int main()
{
        int a, b, s, i, ii;

        while( EOF != scanf("%d %d", &a, &b) ){
                s = a + b;
                for(i=1, ii=0; i<=10000000; i*=10, ii++){
                        if( s < i ){
                                printf("%d\n", ii);
                                break;
                        }
                }
        }

        return 0;
}
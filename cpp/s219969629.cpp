#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a,c=0,j=1;
    scanf("%d",&a);
    for(int i=1;i<4;i++){
        if(a%10==9){
            c+=j;
        }
        if(a%10==1){
            c+=j*9;
        }
        else if(a%10!=1 && a%10!=9){
            c+=j*(a%10);
        }
        j=j*10;
        a=a/10;
    }
    printf("%d\n",c);
    return 0;
}

#include<stdio.h>
int main (){
    int a,b;
    scanf("%d%d",&a,&b);
    int x=0;
    if(b>a)
    {
        x=a,a=b,b=x;
    }
    else;
    
    int z=b;
    while(a%b!=0){
        z=a%b;
        a=b;
        b=z;
    }
    prinf("%d\n",z);
    return 0;
}

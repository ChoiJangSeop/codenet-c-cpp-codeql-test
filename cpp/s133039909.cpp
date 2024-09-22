#include<stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    int a[n];
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    for(i = n;i >=0;i--){
        if(i != 0){
        printf("%d ",a[i]);
        }
        else{
            printf("%d\n",a[i]);
        }
}
return 0;
}

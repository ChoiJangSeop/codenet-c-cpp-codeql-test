#include<stdio.h>
#include<string.h>
const int maxn =2e5;
int main(){
    int n,flag=-1;
    int a[maxn],Max[maxn];
    memset(Max,0,sizeof(Max));
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        Max[a[i]]++;
        if(flag<a[i])
            flag=a[i];
    }
    for(int i=1;i<=n;i++){
        Max[a[i]]--;
        for(int j=flag;j>=0;j--){
            if(Max[j]!=0){
                printf("%d\n",j);
                break;
            }
        }
        Max[a[i]]++;
    }
    return 0;
}

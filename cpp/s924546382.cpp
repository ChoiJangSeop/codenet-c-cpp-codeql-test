#include <cstdio>
#include <cstring>
using namespace std;
char s[10005],ans[10005];
int top=0;
int main(){
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
        if(s[i]!='B'){
            top++;
            ans[top]=s[i];
        } else top--;
    for(int i=1;i<=top;i++)
        printf("%c",ans[i]);
    return 0;
}
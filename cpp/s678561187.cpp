#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char a[100],b[100];
int main()
{
	int r=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
        if(a[i]=='0'||a[i]=='1'){
            b[r]=a[i];
            r++;
        }
        else
            r--;
        if(r<0)
            r=0;
	}
//	printf("%s",a);
//	printf("%d\n",r);
	for(int i=0;i<r;i++){
        printf("%c",b[i]);
	}
	printf("\n");
}

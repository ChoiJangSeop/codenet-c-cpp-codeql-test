#include<cstdio>
#include<string>
#include<string.h>
using namespace std;
char str[100];int a[100],N,len;
int main(){
	scanf("%s",str);
	N=strlen(str);
	for(int i=0;i<N;i++){
		if(str[i]=='0'){
			len++;
			a[len]=0;
		}
		if(str[i]=='1'){
			len++;
			a[len]=1;
		}
		if(str[i]=='B'){
			if(len>0) len--;
		}
	}
	for(int i=1;i<=len;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
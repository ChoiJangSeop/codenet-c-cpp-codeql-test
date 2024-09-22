#include <stdio.h>
int main(void)
{
		int i;
		char s[11];
		char a[11];
		scanf("%s",s);
		for(i=0;i<9;i++){
			if(s[i]=='0'){
				a[i]='0';
			}
			if(s[i]=='1'){
				a[i]='1';
			}
			if(s[i]=='B'){
				a[i-1]=s[i+1];
			}
		}
		printf("%s\n",a);
        return 0;
}
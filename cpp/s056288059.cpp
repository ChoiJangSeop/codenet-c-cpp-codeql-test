#include <cstdio>
#include <cstring>
int main(){
	char s[105];
	char ch[105];
	int cnt=0;
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='B'&&i>0){
			s[i-1]='B';
		}
	}
	for(int i=0;i<=strlen(s);i++){
		if(s[i]=='B')cnt++;
		else ch[i-cnt]=s[i];
	}
	printf("%s\n",ch);
}
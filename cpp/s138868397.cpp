#include<cstdio>
#include<string>
char s[101],s2[101];
int s1,a;
int main()
{
    scanf("%s",s);
	s1=strlen(s);
    for(int i=0; i<s1; i++)
    {
       switch(s[i])
        {
            case'0':s2[a]='0';
			a++;
			break;
            case'1':s2[a]='1';
			a++;
			break;
            case'B':if(a!=0)
			a--;
			break;
        }
    }
    for(int i=0; i<a; i++)
	{
	   printf("%c",s2[i]);
	}
    printf("\n");
}
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cstdio>
#include<string>
//#include<string>
//#include<sstream>
using namespace std;
int main()
{
	int i,k=0;
	char a[1000],b[1000];
	scanf("%s",&a);
	int n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='0') b[k++]='0';
		else if(a[i]=='1') b[k++]='1';
		else if(a[i]=='B') 
		{
			if(k==0) continue;
			else k--;
		}
	}
	for(i=0;i<k;i++) printf("%c",b[i]);
	printf("\n");
}
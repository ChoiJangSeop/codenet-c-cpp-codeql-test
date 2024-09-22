#include<cstdio>
#include<stdlib.h>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn =1e6+5;
typedef long long ll;
const int INF= 0x3f3f3f3f;
const int mod=10007;

char s1[102];
int s2[1020];
int head,tail;

int main()
{
    cin>>s1;
    head=500;
    tail=501;
    memset(s2,-1,sizeof(s2));
    for(int i=0;i<strlen(s1);i++)
    {
        if(s1[i]=='0')
        {
            s2[head]=0;
            head--;
        }
        else if(s1[i]=='1')
        {
            s2[tail]=1;
            tail++;
        }
        else if(s1[i]=='B')
        {
            int flag=0;
            for(int j=1;j<=1010;j++)
                if(s2[j]>=0)
                {
                    flag=1;
                    break;
                }
            if(flag)
            {
                tail--;
                s2[tail]=-1;
            }
        }
    }
    for(int i=0;i<=1010;i++)
    {
        if(s2[i]!=-1)  printf("%d",s2[i]);
    }
    //printf("\0");
    return 0;
}

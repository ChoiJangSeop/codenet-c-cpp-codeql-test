#include <stdio.h>
int dat[20];
int main()
{

    char data[20];
    scanf("%s",data);
    int cnt=0;

    for(int i=0;i<10;i++)
    {
        if((int)data[i]==0)
        {
            dat[cnt]=0;
            cnt++;
        }
        else if((int)data[i]==1)
        {
            dat[cnt]=1;
            cnt++;
        }
        else
        {
            dat[cnt-1]=NULL;
            if(cnt!=0)
                cnt--;
            else
                cnt=0;
        }
    }

    for(int i=0;i<cnt;i++)
    {

        printf("%d",dat[i]);
    }
    return 0;
}
